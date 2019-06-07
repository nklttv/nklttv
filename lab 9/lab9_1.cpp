#include "Time.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Time a,b,c,d,e,f;
	a.setTime(2,50);
	b.setTime(0,10);
	int x = 3;
	d=a+a; d.print();
	e=a-b; e.print();
	f=a*x; f.print();
}

