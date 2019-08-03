#include "stdafx.h"
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <algorithm>
#include <iostream>

using namespace std;

DWORD WINAPI MyThreadFunction(LPVOID lpParam);
DWORD WINAPI SortFunction(LPVOID lpParam);

int * T;
int block_size, t, n;

int main()
{
	int p;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter p: ";
	cin >> p;
	p *= 2;

	T = new int[n];
	for (int i = 0; i < n; i++)
		T[i] = i + 1;
	srand(GetTickCount());
	random_shuffle(T, T + n);
	for (int i = 0; i < n; i++)
		cout << T[i] << " ";
	cout << endl;

	if (n % p != 0)
	{
		if (n % (n / p + 1) == 0)
		{
			p = n / (n / p + 1);
			block_size = n / p;
		}
		else
		{
			t = n % (n / p + 1);
			p = n / (n / p + 1) + 1;
			block_size = n / p + 1;
		}
	}
	else
		block_size = n / p;

	int even_step_device, odd_step_device;
	if (p % 2 != 0)
	{
		even_step_device = p / 2;
		odd_step_device = p / 2 - 1;
	}
	else
		odd_step_device = even_step_device = p / 2;


	HANDLE * sortThreadArray = new HANDLE[p];
	for (int i = 0; i < p; i++)
	{
		sortThreadArray[i] = CreateThread(
			NULL,                   // default security attributes
			0,                      // use default stack size  
			SortFunction,       // thread function name
			(LPVOID)i,          // argument to thread function 
			0,                      // use default creation flags 
			NULL);   // returns the thread identifier 
	}
	WaitForMultipleObjects(p, sortThreadArray, TRUE, INFINITE);

	for (int i = 0; i < p; i++)
		CloseHandle(sortThreadArray[i]);

	HANDLE * hThreadArray = new HANDLE[p / 2];

	for (int c = 0; c < p; c++) // с - считает шаги
	{
		int threads;
		int j; // четность/нечетность шага и в дальнейшем индекс верхнего провода устр-ва
		if (c % 2 == 0)
		{
			threads = even_step_device;
			j = 0;
		}
		else
		{
			threads = odd_step_device;
			j = 1;
		}

		for (int i = 0; i < threads; i++, j += 2)
		{
			hThreadArray[i] = CreateThread(
				NULL,                   // default security attributes
				0,                      // use default stack size  
				MyThreadFunction,       // thread function name
				(LPVOID)j,          // argument to thread function 
				0,                      // use default creation flags 
				NULL);   // returns the thread identifier 
		}


		WaitForMultipleObjects(threads, hThreadArray, TRUE, INFINITE);

		for (int i = 0; i < threads; i++)
			CloseHandle(hThreadArray[i]);
	}

	for (int i = 0; i < n; i++)
		cout << T[i] << " ";

	delete[] hThreadArray;
	delete[] sortThreadArray;
	delete[] T;
	return 0;
}

DWORD WINAPI MyThreadFunction(LPVOID lpParam)
{
	int start = (int)lpParam;
	int end = start + 1;

	int * help = new int[2 * block_size];
	int size1 = block_size, size2;

	if (end*block_size == n - t)
		size2 = t;
	else size2 = block_size;
	int i = start*size1, j = end*size1, index = 0;
	int i_end = end*size1, j_end = end*size1 + size2;
	while (i < i_end && j < j_end)
	{
		if (T[i] < T[j])
		{
			help[index] = T[i];
			i++;
		}
		else
		{
			help[index] = T[j];
			j++;
		}
		index++;
	}
	while (i < i_end)
	{
		help[index] = T[i];
		index++;
		i++;
	}

	while (j < j_end)
	{
		help[index] = T[j];
		index++;
		j++;
	}
	for (int k = start*size1, l = 0; k < j_end; k++, l++)
		T[k] = help[l];

	delete[] help;
	return 0;
}

DWORD WINAPI SortFunction(LPVOID lpParam)
{
	int i = (int)lpParam;
	int size;

	if (i*block_size == n - t)
		size = t;
	else
		size = block_size;

	sort(T + i*block_size, T + i*block_size + size);
	return 0;
}