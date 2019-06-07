#include "money.h"
#include <iostream>

void money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
	while (kopeek > 100) {
		kopeek -=100 ;
		rubley++;
	}
}

bool money::operator<(money & Money)
{
	if (rubley < Money.rubley)
		return true;
	if (rubley == Money.rubley)
	{
		if (kopeek < Money.kopeek)
			return true;
		else return false;
	}
	else return false;
}

bool money::operator<=(money & Money)
{
	if (rubley <= Money.rubley && kopeek <= Money.kopeek)
	{
		return true;
	}
	else return false;
}

bool money::operator>(money & Money)
{
	if (rubley > Money.rubley)
		return true;
	if (rubley == Money.rubley)
	{
		if (kopeek > Money.kopeek)
			return true;
		else return false;
	}
	else return false;
}

bool money::operator>=(money & Money)
{
	if (rubley >= Money.rubley && kopeek >= Money.kopeek)
	{
		return true;
	}
	else return false;
}

bool money::operator==(money & Money)
{
	if (rubley == Money.rubley && kopeek == Money.kopeek)
	{
		return true;
	}
	else return false;
}