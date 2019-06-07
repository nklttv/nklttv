#include "money.h"
#include <iostream>
#include <stdio.h>

void money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	while (newKopeek > 100) {
		rubley++;
		newKopeek -=100;
	}
	kopeek = newKopeek;
}

void money::addMoney(money & someMoney)
{
	rubley += someMoney.rubley;
	kopeek = someMoney.kopeek >= 100 ? someMoney.kopeek - 100 : someMoney.kopeek;
	if(someMoney.kopeek>=100)
		rubley++;
}

void money::substractMoney(money & someMoney)
{
	rubley -= someMoney.rubley;
	int pence = (kopeek - someMoney.kopeek)<0 ? 100+(kopeek - someMoney.kopeek) : kopeek - someMoney.kopeek;
	if ((kopeek - someMoney.kopeek)<0)
		rubley--;
}

void money::print()
{
	printf("%d, %d \n", rubley, (int)kopeek );
}
