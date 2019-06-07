#include <iostream>
#include <stdio.h>
#include <string>
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
            void setPosition(string newPosition){ position=newPosition;	};
	       	string getPosition(){ return position; };
			void setidCard(idCard* newidCard) { card = newidCard; };
		    idCard* getidCard(){ return card; };
		    void setRoom(int newRoom){ room = newRoom; };
			int getRoom(){ return room; };
		    void setDepartment(Department* newDepartment) { department = newDepartment; };
			Department* getDepartment(){ return department; };
			void print(){ printf("Employee %s sidit %d ", position.c_str(), room); department->getName(); };
 };


	