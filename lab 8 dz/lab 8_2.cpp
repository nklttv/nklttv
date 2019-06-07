#include <iostream>
#include "money.h"


int main()
{
	money a, b;
	a.set(10, 120);
	b.set(20, 30);
	a.addMoney(b);
	a.print();
	a.set(21, 0);
	a.substractMoney(b);
	a.print();
}