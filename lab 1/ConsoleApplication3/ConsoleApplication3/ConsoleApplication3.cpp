// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>



void read_complex(int &a) {

	printf_s("������� �������� �: ");
	scanf_s("%d", &a);
	printf("�� ����� %d", a);
	printf("\n����� � ������ %d", &a);
}

int main()
{
	setlocale(LC_ALL, "Russian");
    
	int a;
	int *b = &a, *c = &a; 
	read_complex(a);
	printf("\n�������� b: %d", b);
	if (b == &a)
		printf("\n����� � � �������� b �����");
	printf("\n�������� � ����� ��������� b: %d", *b);
	system("pause");
}

// * - �������� �������������
// & -  �������� ������ ������




