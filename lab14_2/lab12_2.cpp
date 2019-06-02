#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include "stdio.h"
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;


DWORD WINAPI thread1(LPVOID);
DWORD WINAPI thread2(LPVOID);
DWORD WINAPI thread3(LPVOID);
DWORD WINAPI thread4(LPVOID);
DWORD WINAPI thread5(LPVOID);

volatile int Putin, Medvedev, Sobchak;


int _tmain(int argc, _TCHAR* argv[])
{
	
	Putin=0;
	Medvedev=0;
	Sobchak=0;
	HANDLE thread[5];
	thread[0]=CreateThread(NULL,0,thread1,NULL, 0, NULL);
	thread[1]=CreateThread(NULL,0,thread2,NULL, 0, NULL);
	thread[2]=CreateThread(NULL,0,thread3,NULL, 0, NULL);
	thread[3]=CreateThread(NULL,0,thread4,NULL, 0, NULL);
	thread[4]=CreateThread(NULL,0,thread5,NULL, 0, NULL);
	
	DWORD dwWaitResult = ::WaitForMultipleObjects(5,thread,true, INFINITE);

	cout << "Golosov u Putina: \n" << Putin;
	cout << "Golosov u Medvedeva: \n"<< Medvedev;
	cout << "Golosov u Sobchaka: \n" << Sobchak;
	
	return 0;
}

DWORD WINAPI thread1(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
		
{
	int res=rand()%3+1;
		if (res == 1)
		{
			Putin++;
		}

		if (res == 2)
		{
			Medvedev++;
		}
		if (res == 3)
		{
			Sobchak++;
		}
	
		
}

	cout << "1 gorod \n ";

	return 0;
	}
DWORD WINAPI thread2(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)

	{
	int res=rand()%3+1;
	{
		if (res == 1)
		{
			Putin++;
		}

		if (res == 2)
		{
			Medvedev++;
		}
		if (res == 3)
		{
			Sobchak++;
		} 
	
	
}
	}
	cout << "2 gorod \n";
	return 0;
	
}
DWORD WINAPI thread3(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
{
	int res=rand()%3+1;
		if (res == 1)
		{
			Putin++;
		}

		if (res == 2)
		{
			Medvedev++;
		}
		if (res == 3)
		{
			Sobchak++;
		} 
	
}
	cout << "3 gorod \n";
	return 0;
	}
DWORD WINAPI thread4(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
	{
	int res=rand()%3+1;
	{
		if (res == 1)
		{
			Putin++;
		}

		if (res == 2)
		{
			Medvedev++;
		}
		if (res == 3)
		{
			Sobchak++;
		}
}
	}

	cout << "4 gorod \n";
	return 0;

}
DWORD WINAPI thread5(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
{
	int res=rand()%3+1;
		if (res == 1)
		{
			Putin++;
		}

		if (res == 2)
		{
			Medvedev++;
		}
		if (res == 3)
		{
			Sobchak++;
		} 
	
}
	cout << "5 gorod \n";
	return 0;
	;}