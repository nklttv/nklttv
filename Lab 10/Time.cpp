#include "stdafx.h"
#include "Time.h"
#include <iostream>
#include <stdio.h>
using namespace std;

void Time::setTime(long newhours, unsigned char newminutes)
{ 
	this->hours=newhours;
	this->minutes=newminutes;
	
}
long Time::gethours()
{
	return this->hours;
}
unsigned char Time::getMinutes()
{
 return this->minutes;
}


Time Time::operator+ (Time & plustime)
{

	Time result;
	result.hours=this->hours+plustime.hours;
    result.minutes=this->minutes+plustime.minutes;
	if (result.minutes>=60);
	{
   result.hours = result.hours+1 ;
   result.minutes =  result.minutes-60;
 
return result; 

	}
}

Time Time::operator- (Time & minustime)
{
  
	Time result;
	result.hours=this->hours-minustime.hours;
    
	int m = minutes-minustime.minutes;
	 
   if (m<0)
	{
   result.hours = result.hours- 1 ;
   result.minutes = m + 60;
  
   }
   else result.minutes = m;
return result; 
}

Time Time::operator* (int multimes)
{

	Time result;
   result.hours=hours*multimes;
  int m = minutes*multimes;
  if (m>60)
	 {
		 int addminutes = m % 60 ;
		 int addhours = m / 60 ;
    result.hours += addhours ;
	result.minutes = addminutes;
	
	   } 
  else 
	  result.minutes = m;
	   return result; 
}

bool Time::operator< (Time & minustime)
{
  bool result;
  if  (this->hours<minustime.hours) return true;
  else if (this->hours>minustime.hours) return false;
  if  (this->minutes<minustime.minutes) return true;
  else if  (this->minutes>minustime.minutes) return false;
}



bool Time::operator> (Time & minustime)
{
  bool result;
    if  (minustime.hours>this->hours) return false;
  else if (minustime.hours<this->hours) return true;
  if  (minustime.minutes>this->minutes) return false;
  else if  (minustime.minutes<this->minutes) return true;
}

void Time::print()
{
	std::cout << hours << ":" << (int)minutes <<std::endl;
}
