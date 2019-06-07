#include <iostream>
#include <stdio.h>
#include "money.h"


int main()
{
	money one; 	one.set(5, 120);
	money two;	two.set(4, 30);
	money three = one + two;
	three.print();
	if (one < two) printf("one<two = true\n");
	else printf("one<two = false\n");
	if (one <= two) printf("one<=two = true\n");
	else printf("one<=two = false\n");
	if (one > two) printf("one>two = true\n");
	else printf("one>two = false\n");
	if (one >= two) printf("one>=two = true\n");
	else printf("one>=two = false\n");
	if (one == two) printf("one==two = true\n");
	else printf("one==two = false\n");

	money arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i].set(std::rand() % 100, std::rand() % 100);
		arr[i].print();
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				money val = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = val;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		arr[i].print();
	}
}
