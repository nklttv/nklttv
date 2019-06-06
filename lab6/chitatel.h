#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "book.h"
using namespace std;
class chitatel
{
private:
std::string fio;
int age;
book current_book;
public:
	chitatel( std::string aFio, int aAge, book aCurrent_book){
		fio = aFio;
		age = aAge;
		current_book = aCurrent_book;
	};
	void get_info(){
		printf("%s , %d, ",fio, age);
		current_book.get_info();
	}
}

