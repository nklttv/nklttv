#include "stdafx.h"
#include "Time.h"
#include <iostream>
using namespace std;

Time Time::operator+ (Time & aTime)
{
	Time result;
	result.hours=hours+aTime.hours;
    result.minutes=minutes+aTime.minutes;
	if (result.minutes>=60);
	{
   		result.hours = result.hours+1 ;
   		result.minutes =  result.minutes-60;
 	}
	return result; 
}

Time Time::operator- (Time & aTime)
{
  
	Time result;
	result.hours=hours-aTime.hours;
   	if ((minutes-aTime.minutes)<0){
   		result.hours = result.hours- 1 ;
   		result.minutes = (minutes-aTime.minutes) + 60; 
   	}
   	else 
   		result.minutes = (minutes-aTime.minutes);
	
	return result; 
}

Time Time::operator* (int value)
{

	Time result;
   	result.hours=hours*value;
  	int m = minutes*value;
  	while ((minutes*value)>60)
	{
    	result.hours++;
		result.minutes-=60;
	}
	else 
		result.minutes = m;
	
	return result; 
}
