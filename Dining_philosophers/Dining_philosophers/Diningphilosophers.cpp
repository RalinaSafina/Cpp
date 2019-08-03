#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;

HANDLE ghSemaphore;
DWORD WINAPI ThreadProc(LPVOID);
HANDLE * ghMutex;
int n;
int Round;

int main(void)
{
	cout << "Enter number of philosophers:  ";
	cin >> n;
	cout << "Enter number of rounds:  ";
	cin >> Round;

	HANDLE * aThread = new HANDLE [n];

	ghSemaphore = CreateSemaphore(
		NULL,           // default security attributes
		n - 1,  // initial count
		n - 1,  // maximum count
		NULL);          // unnamed semaphore

	ghMutex = new HANDLE[n];

	for (int i = 0; i < n; i++)
		ghMutex[i] = CreateMutex(
			NULL,              // default security attributes
			FALSE,             // initially not owned
			NULL);
	
		for (int i = 0; i < n; i++)
			aThread[i] = CreateThread(
				NULL,
				0,
				ThreadProc,
				(LPVOID)i,
				0,
				NULL);
		
		WaitForMultipleObjects(n, aThread, TRUE, INFINITE);

		
		for (int i = 0; i < n; i++)
		{
			CloseHandle(aThread[i]);
			CloseHandle(ghMutex[i]);
		}

	CloseHandle(ghSemaphore);

	delete[] aThread;
	delete[] ghMutex;
	return 0;
}

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	int num = (int)lpParam;
	srand(GetTickCount() + num);

	for (int j = 0; j < Round; j++)
	{
		
			// Try to enter the semaphore gate.
			printf("Philosopher %d is mediating. \n", num);
			Sleep(rand() % 5 * 1000 + 1000);

			WaitForSingleObject(							//операция Р
				ghSemaphore,   // handle to semaphore
				INFINITE);           
			
				WaitForSingleObject(
					ghMutex[num],
					INFINITE);
				printf("Philosoper %d took left wand. \n", num);
				Sleep(100);

				WaitForSingleObject(
					ghMutex[(num + 1) % n],
					INFINITE);
				printf("Philosoper %d took right wand. \n", num);
				printf("Philosoper %d is having dinner. \n", num);
				Sleep(rand() % 3 * 1000 + 1000);

				ReleaseMutex(ghMutex[num]);
				ReleaseMutex(ghMutex[(num + 1) % n]);

				ReleaseSemaphore(						//операция V /можно не проверять
					ghSemaphore,  // handle to semaphore
					1,            // increase count by one
					NULL);       // not interested in previous count
	}
	return TRUE;
}


