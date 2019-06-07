// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>



void read_complex(int &a) {

	printf_s("Введите значение а: ");
	scanf_s("%d", &a);
	printf("Вы ввели %d", a);
	printf("\nАдрес в памяти %d", &a);
}

int main()
{
	setlocale(LC_ALL, "Russian");
    
	int a;
	int *b = &a, *c = &a; 
	read_complex(a);
	printf("\nЗначение b: %d", b);
	if (b == &a)
		printf("\nАдрес а и значение b равны");
	printf("\nЗначение а через указатель b: %d", *b);
	system("pause");
}

// * - оператор разыменования
// & -  оператор взятия адреса




