// lab9_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Time a,b,c,d,e,f;
	a.setTime(2,50);
	b.setTime(0,10);
	int x;
	x=3;
	d=a+a;
	e=a-b;
	f=a*x;
	d.print();
	e.print();
	f.print();
}

