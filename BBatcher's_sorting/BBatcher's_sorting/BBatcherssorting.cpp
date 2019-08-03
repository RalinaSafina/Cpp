#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <algorithm>

using namespace std;

DWORD WINAPI MyThreadFunction(LPVOID lpParam);

int * T;
int len; //длина сравнивающего устройства
int n;

int main()
{
	cout << "Enter n:   ";
	cin >> n;
	int im_n; //imaginary_n

	T = new int[n];
	for (int i = 0; i < n; i++)
		T[i] = i + 1;
	srand(GetTickCount());
	random_shuffle(T, T + n);
	for (int i = 0; i < n; i++)
		cout << T[i] << " ";
	cout << endl;

	int pwr = 1;
	while (n > pwr)
		pwr *= 2;
	im_n = pwr;


	HANDLE * hThreadArray = new HANDLE[im_n / 2];
	int part_size = 2; // размер частей,на которые мы разбили(макс длина сравн устр-в в текущей фазе)
	for(int phase = 1; phase < n; phase *= 2)
	{
		int part_num = im_n / part_size; //кол-во частей, на которое разбивается текущая часть(по глубине) фазы
		len = phase;
		int rate = 0;
		while(len != 0)
		{
			int thr_part = (part_size - 2 * rate) / 2; //кол-во потоков внутри одной части
			int part = 0;
			int p = 0;
			int count = 0; //считает кол-во сравн устройств, уже задействованных на данном этапе
			int help = 0; //помогает определить верхний провод сравн устр-ва
			while (part < part_num)
			{
				for (int k = 0; k < len; k++)
				{
					int el = rate + part*part_size + help; //индекс верхнего провода устр-ва
					if (el + len < n)
					{
						hThreadArray[p] = CreateThread(
							NULL,                   // default security attributes
							0,                      // use default stack size
							MyThreadFunction,       // thread function name
							(LPVOID)el,          // argument to thread function
							0,                      // use default creation flags
							NULL);   // returns the thread identifier	
						p++;
					}
					count ++;
					help ++;
					if (count % len == 0) help += len;
								
				}
				if (count == thr_part)
				{
					part++;
					count = 0;
					help = 0;
				}
			}

			WaitForMultipleObjects(p, hThreadArray, TRUE, INFINITE);
			

			len /= 2;
			if (rate == 0)
				rate = phase / 2;
			else
				rate /= 2;
		for (int i = 0; i < p; i++)
			CloseHandle(hThreadArray[i]);	
		}
		part_size *= 2;
	}

	for (int i = 0; i < n; i++)
		cout << T[i] << " ";

	delete[] hThreadArray;
	delete[] T; 
    return 0;
}

DWORD WINAPI MyThreadFunction(LPVOID lpParam)
{
	int start = (int)lpParam;
	int end = start + len;

	if (T[start] > T[end])
		swap(T[start], T[end]);

	return 0;
}
