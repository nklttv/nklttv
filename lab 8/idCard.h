#pragma once
#include <string>
#include <iostream>


using namespace std;

class idCard
{
private:
	int number;
    string dateExpire;
public:
	
	void setNumber(int newNumber)
	{
	this->number=newNumber;
	return;
	};
	int getNumber()
	{
	return this->number;
	};
	void setDateExpire(string newDateExpire){
	this->dateExpire=newDateExpire;
	return;
	};
	string getDateExpire(){
	return this->dateExpire;
	};	  
	void print(){
	cout <<"id:  "<<this->number << endl;
	return;
	};
};

		