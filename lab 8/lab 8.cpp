// lab 8pp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "idCard.h"
#include "Employee.h"
#include "Department.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Department dA, dB;
	Employee Ivan, Petr, Sidor, Mihail, Alexandr, Evgenia;
	idCard id101;
	idCard id5016;
	idCard id5018;
	idCard id201;
	idCard id5022;
	idCard id5019;
	
	id101.setNumber(101);
	id5016.setNumber(5016);
	id5018.setNumber(5018);
	id201.setNumber(201);
	id5022.setNumber(5022);
	id5019.setNumber(5019);

	dA.setName("Departament razrabotka");
	dA.setHead(&Ivan);
	
	Ivan.setPosition("Glava departamenta");
	Ivan.setDepartment(&dA);
	
	Ivan.setRoom(101);
	Ivan.setidCard(&id101);
	
	Petr.setPosition("Glavnuy razrabotnik");
	Petr.setDepartment(&dA);
	
	Petr.setRoom(102);
	Petr.setidCard(&id5016);
	
	Sidor.setPosition("Razrabotnik");
	Sidor.setDepartment(&dA);
	
	Sidor.setRoom(102);
	Sidor.setidCard(&id5018);

	dB.setName("Departament Administrasii");
	dB.setHead(&Mihail);

	Mihail.setPosition("Director");
	Mihail.setDepartment(&dB);
	
	Mihail.setRoom(201);
	Mihail.setidCard(&id201);

	Alexandr.setPosition("Zamestitel directora");
	Alexandr.setDepartment(&dB);
	
	Alexandr.setRoom(201);
	Alexandr.setidCard(&id5022);

	Evgenia.setPosition("Glavnuy buhgalter");
	Evgenia.setDepartment(&dB);
	
	Evgenia.setRoom(202);
	Evgenia.setidCard(&id5019);

	Ivan.print();
	Petr.print();
	Sidor.print();
	Mihail.print();
	Alexandr.print();
	Evgenia.print();
	
	dA.print();
	dB.print();
	system("pause");
	
	return 0;


}

