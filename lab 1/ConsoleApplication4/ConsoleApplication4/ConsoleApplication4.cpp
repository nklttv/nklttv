#include "stdafx.h"
#include <iostream>

struct complex
{
	double x,y;

};


void read_complex(struct complex & a)
{
	printf("������� �������� a.x ");
	scanf_s("%lf", &((a).x)); 
	printf("������� �������� a.y ");
	scanf_s("%lf", &((a).y));
}

void write_complex(struct complex & a, int i)
{
	printf("\n%d �������� a.x = %.2f", i, a.x);
	printf("\n%d �������� a.y =  %.2f", i, a.y);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	complex a[5];
	for (int i = 0; i < 5; i++)
		read_complex(a[i]);
	for (int i = 0; i < 5; i++)
		write_complex(a[i], i+1);
	system("pause");
}
// * - �������� �������������
// & -  �������� ������ ������

