class Department;
#pragma once

#include <string>
#include "stdafx.h"
#include <iostream>
#include "Employee.h"
using namespace std;

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


  
  
		   	   
		   
		   
		  