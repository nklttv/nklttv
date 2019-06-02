#include "stdafx.h"
#include "Department.h"

void Department::setName(string newName)
{
	this->name=newName;
	return;
}

void Department::setHead(Employee* newHead)
{
	this->head=newHead;
	return;
}

void Department::print()
{
	cout <<" Departament: "<<this->name << " Glava: "<< this->head->getPosition() << endl;
		this->head->print();
	return;
}

string Department::getName()
{
	return (this->name);
}

Employee* Department::getHead()
{
	return this->head;
}