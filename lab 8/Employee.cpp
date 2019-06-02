#include "stdafx.h"
#include "Employee.h"

   void Employee::setPosition(string newPosition)
   {
	   this->position=newPosition;
	  return;
   }
   void Employee::setidCard(idCard* newidCard)
   {
	   this->card=newidCard;
		return;
   }
   void Employee::setRoom(int newRoom)
   {
	    this->room=newRoom;
		return;
   }
   void Employee::setDepartment(Department* newDepartment)
   {
	   this->department=newDepartment;
	   return;
   }
   void Employee::print()
   {
	   cout <<" Employee:  "<<this->position<<" sidit v "<<this->room <<this->department->getName()<<endl;
	   return;
   }
   string Employee::getPosition()
   {
	   return this->position;
   }
   idCard* Employee::getidCard()
   {
	   return this->card;
   }

   int Employee::getRoom()
   {
	   return this->room;
   }

   Department* Employee::getDepartment()
   {
	   return this->department;
   }
