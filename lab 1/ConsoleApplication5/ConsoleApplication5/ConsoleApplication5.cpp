#include "stdafx.h"
#include <iostream>
#include <math.h>


struct complex
{
	double x,y;
};


void read_complex(struct complex & a)
{
	printf("������� �������� a.x:");
	scanf_s("%lf", &((a).x));
	printf("������� �������� a.y: ");
	scanf_s("%lf", &((a).y));
}

double module_complex(struct complex &a) 
{
	double r = sqrt((a.x*a.x) + (a.y*a.y));
	return r;
}

void write_complex(struct complex & a, int i)
{
	printf("\n%d �������� a.x = %.2f\n", i, a.x);
	printf("%d �������� a.y =  %.2f\n", i, a.y);
	printf("%d ������ ������������ ����� =  %.2f\n", i, module_complex(a));
	
}


void sort_bubble_complex(struct complex a[], int n) 
{
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			if (module_complex(a[j]) > module_complex(a[j + 1]))
			{
				complex tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	printf("������� ������ �������: ");
	scanf_s("%d", &n);
	complex *a = new complex[n];
	for (int i = 0; i < n; i++)
		read_complex(a[i]);
	printf("������ �� ����������: \n");
	for (int i = 0; i < n; i++)
		write_complex(a[i], i + 1);
	printf("������ ����� ����������: \n");
	sort_bubble_complex(a, n);
	for (int i = 0; i < n; i++)
		write_complex(a[i], i + 1);
	system("pause");
}
