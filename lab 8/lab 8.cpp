#include <string>
#include <iostream>
#include "idCard.h"
#include "Employee.h"

class Department
{
private:
	string name;
	Employee* head;
public:
   void setName(string newName);
   string getName();
   void setHead(Employee* newHead);
   Employee* getHead();
   void print();
};

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

int _tmain(int argc, _TCHAR* argv[])
{
	Department dA, dB;

	dA.setName("Departament razrabotka");
	dA.setHead(&Ivan);
	dB.setName("Departament Administrasii");
	dB.setHead(&Mihail);

	Employee Ivan, Petr, Sidor, Mihail, Alexandr, Evgenia;

	Ivan.setPosition("Glava departamenta");
	Ivan.setDepartment(&dA);
	Petr.setPosition("Glavnuy razrabotnik");
	Petr.setDepartment(&dA);
	Sidor.setPosition("Razrabotnik");
	Sidor.setDepartment(&dA);
	Mihail.setPosition("Director");
	Mihail.setDepartment(&dB);
	Alexandr.setPosition("Zamestitel directora");
	Alexandr.setDepartment(&dB);
	Evgenia.setPosition("Glavnuy buhgalter");
	Evgenia.setDepartment(&dB);

	idCard id101, id5016, id5018, idCard id201,id5022, id5019;
	
	id101.setNumber(101);
	Ivan.setRoom(id101.getNumber());
	Ivan.setidCard(&id101);
	
	id5016.setNumber(5016);
	Petr.setRoom(id5016.getNumber());
	Petr.setidCard(&id5016);
	

	id5018.setNumber(5018);
	Sidor.setRoom(id5018.getNumber());
	Sidor.setidCard(&id5018);

	id201.setNumber(201);
	Mihail.setRoom(id201.getNumber());
	Mihail.setidCard(&id201);

	id5022.setNumber(5022);
	Alexandr.setRoom(id5022.getNumber());
	Alexandr.setidCard(&id5022);

	id5019.setNumber(5019);
	Evgenia.setRoom(id5019.getNumber());
	Evgenia.setidCard(&id5019);

	Ivan.print(); Petr.print(); Sidor.print();
	Mihail.print(); Alexandr.print(); Evgenia.print();
	
	dA.print(); dB.print();
	system("pause");
	
	return 0;


}

