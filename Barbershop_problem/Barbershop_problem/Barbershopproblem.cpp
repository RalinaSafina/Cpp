#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

HANDLE chairs, ready, leave;
DWORD WINAPI Visitor(LPVOID);
DWORD WINAPI Barber(LPVOID);
queue <int> table1, table2;
HANDLE /* visitor, */ *haircut_end;
HANDLE mutex1, mutex2;		//mutex for 1st table and for 2nd
int vis, Round, barb, sofa;

int main(void)
{
	cout << "Enter number of visitors:  ";
	cin >> vis;
	cout << "Enter number of haircuts:  ";
	cin >> Round;
	cout << "Enter number of barbers:  ";
	cin >> barb;
	cout << "Enter number of seats on sofa:  ";
	cin >> sofa;
	int seats = sofa + barb;
	for (int i = 0; i < seats; i++)		//number of seats in 2 halls
		table1.push(i);
	if (barb == 0)
	{
		cout << "The barbershop doesn't exist." << endl;
		return 0;
	}
	HANDLE * vis_thread = new HANDLE[vis];
	HANDLE * barb_thread = new HANDLE[barb];

	mutex1 = CreateMutex(NULL, FALSE, NULL);
	mutex2 = CreateMutex(NULL, FALSE, NULL);

	chairs = CreateSemaphore(
		NULL,           // default security attributes
		barb,  // initial count
		barb,  // maximum count
		NULL);          // unnamed semaphore
	ready = CreateSemaphore(NULL, 0, barb, NULL);
	leave = CreateSemaphore(NULL, 0, barb, NULL);
//	visitor = new HANDLE[seats];
	haircut_end = new HANDLE[seats];

	for (int i = 0; i < seats; i++)
	{
//		visitor[i] = CreateSemaphore(NULL, 0, 1, NULL);
		haircut_end[i] = CreateSemaphore(NULL, 0, 1, NULL);
	}

	for (int i = 0; i < vis; i++)
		vis_thread[i] = CreateThread(
			NULL,
			0,
			Visitor,
			(LPVOID)i,
			0,
			NULL);

	for (int i = 0; i < barb; i++)
		barb_thread[i] = CreateThread(
			NULL,
			0,
			Barber,
			(LPVOID)i,
			0,
			NULL);
	
	WaitForMultipleObjects(vis, vis_thread, TRUE, INFINITE);

	for (int i = 0; i < vis; i++)
		CloseHandle(vis_thread[i]);

	for (int i = 0; i < barb; i++)
		CloseHandle(barb_thread[i]);

	for (int i = 0; i < seats; i++)
	{
	//	CloseHandle(visitor[i]);
		CloseHandle(haircut_end[i]);
	}
	
	CloseHandle(chairs);
	CloseHandle(ready);
	CloseHandle(leave);
	CloseHandle(mutex1);
	CloseHandle(mutex2);

	delete[] vis_thread;
//	delete[] visitor;
	delete[] barb_thread;
	delete[] haircut_end;
	return 0;
}

DWORD WINAPI Visitor(LPVOID lpParam)
{
	int num = (int)lpParam;		//thread number
	srand(GetTickCount() + num);
	int j = 0;
	int ticket;		//talon


	while(j < Round)
	{
		if (table1.empty())
		{
			printf("No free seats. Visitor %d is leaving the barbershop. \n", num);
			Sleep(rand() % 5 * 1000 + 1000);
			continue;
		}
		else
		{
			WaitForSingleObject(mutex1, INFINITE);
			ticket = table1.front();
			table1.pop();
			ReleaseMutex(mutex1);
			printf("Visitor %d came to the barbershop and took ticket %d. \n", num, ticket);
		}

		WaitForSingleObject(							//операция Р
			chairs,										//oжидание свободного кресла
			INFINITE);

		WaitForSingleObject(mutex2, INFINITE);
		table2.push(ticket);
		ReleaseMutex(mutex2);

		printf("Visitor %d sat down on the chair. \n", num);
		
		ReleaseSemaphore(ready, 1, NULL);	//ready to haircut     

		WaitForSingleObject(haircut_end[ticket], INFINITE);		//oжидание окончания стрижки

		printf("Visitor %d did haircut and left the barbershop. \n", num);
		ReleaseSemaphore(/*visitor[ticket]*/ leave, 1, NULL);		//покинул кресло

		j++;
		Sleep(rand() % 5 * 1000 + 1000);
	}
	return TRUE;
}

DWORD WINAPI Barber(LPVOID lpParam)
{
	int num = (int)lpParam;
	srand(GetTickCount() + num);
	while (INFINITE)
	{
		WaitForSingleObject(ready, INFINITE);		//oжидание готовности к стрижке

		WaitForSingleObject(mutex2, INFINITE);
		int ticket = table2.front();
		table2.pop();
		ReleaseMutex(mutex2);
		printf("Barber %d do haircut to visitor with ticket %d. \n", num, ticket);
		Sleep(rand() % 3 * 1000 + 1000);

		ReleaseSemaphore(haircut_end[ticket], 1, NULL);		//стрижка окончена
		WaitForSingleObject(/*visitor[ticket]*/ leave, INFINITE);		//ждет, пока посетитель покинет кресло

		WaitForSingleObject(mutex1, INFINITE);
		table1.push(ticket);
		ReleaseMutex(mutex1);

		printf("Barber %d is ready to do next haircut. \n", num);
		ReleaseSemaphore(chairs, 1, NULL);
	}
	return TRUE;
}
