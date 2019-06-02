// lab12pp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "windows.h"
#include <conio.h>


using namespace std;
	volatile int i;

DWORD WINAPI thread2(LPVOID);
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "First thread\n";
	HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
	cout << "More data from first thread\n";

	int i = 1;  
		while(true)
  	{
		i *= -i;
		}
	cout << "Even more data from first thread\n";
	_getch();
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	
	cout << "Second thread\n";
	  while (true){
            i++;
            printf("i = %i",i);
	  }
	return 0;
}



