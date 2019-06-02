#include "stdafx.h"
#include "idCard.h"
#include "Department.h"
#include "Employee.h"


void idCard::setNumber(int newNumber)
{
	this->number=newNumber;
	return;
}
void idCard::setDateExpire(string newDateExpire)
{
	this->dateExpire=newDateExpire;
	return;
}
void idCard::print()
{
	cout <<"id:  "<<this->number << endl;
	return;
}

int idCard::getNumber()
{
	return this->number;
}

string idCard::getDateExpire()
{
	return this->dateExpire;
}