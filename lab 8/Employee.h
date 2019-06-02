class Employee;
#pragma once
#include "Department.h"
#include "idCard.h"

class Employee
{  
private: 
	       string position;
		   idCard* card;
		   int room;
		   Department * department;  
 public:
            void setPosition(string newPosition);
	       string getPosition();
			void setidCard(idCard* newidCard);
		    idCard* getidCard();
		    void setRoom(int newRoom);
			int getRoom();
		    void setDepartment(Department* newDepartment);
			Department* getDepartment();
			void print();
 };


	