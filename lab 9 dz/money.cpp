#include "money.h"
#include <iostream>

void money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
	while (kopeek > 100) {
		kopeek -=100 ;
		rubley++;
	}
}

money money::operator+(money & someMoney)
{
	money result;
	result.rubley=rubley+someMoney.rubley;
    result.kopeek=kopeek+someMoney.kopeek;
	if (result.kopeek>=100);
	{
   		result.rubley = result.rubley+1 ;
   		result.kopeek =  result.kopeek-100;
 	}
 	return result;
}

money money::operator-(money & someMoney)
{
	money result;
	result.rubley=rubley-someMoney.rubley;
   	if ((kopeek-someMoney.kopeek)<0){
   		result.rubley = result.rubley- 1 ;
   		result.kopeek = (kopeek-someMoney.kopeek) + 60; 
   	}
   	else 
   		result.kopeek = (kopeek-someMoney.kopeek);	
	return result; 
}

money money::operator*(const int& value)
{
	money result;
   	result.rubley=rubley*value;
  	int m = kopeek*value;
  	while ((kopeek*value)>60)
	{
    	result.rubley++;
		result.kopeek-=60;
	}
	else 
		result.kopeek = m;
	
	return result; 
}
