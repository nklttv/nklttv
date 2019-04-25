// lab9_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Time a,b,c,d,e,f,v,y,n,m;
	bool t,k;
	t=v<y;
	k=n>m;
	a.setTime(2,30);
	b.setTime(0,40);
	v.setTime(2,30);
	y.setTime(3,20);
	n.setTime(2,30);
	m.setTime(2,40);
	int x;
	x=3;
	d=a+a;
	e=a-b;
	f=a*x;
	d.print();
	e.print();
	f.print();
	
	if (v<y)
	{ 
		v.print();
		cout << "<";
		y.print();
	}
	else
		{ 
		v.print();
		cout << ">";
		y.print();
	}

	if (n>m)
	{ 
		n.print();
		cout << ">";
		m.print();
	}
	else
		{ 
		n.print();
		cout << "<";
		m.print();
	}




{
  Time *arr,  temp;
	  cout<<"n=";
	  arr = new Time[10];
  arr[0].setTime(2,30);
  arr[1].setTime(2,40);
  arr[2].setTime(5,40);
  arr[3].setTime(7,50);
  arr[4].setTime(1,20);
  arr[5].setTime(2,20);
  arr[6].setTime(6,55);
  arr[7].setTime(9,56);
  arr[8].setTime(3,40);
  arr[9].setTime(5,50);


    // Сортировка массива пузырьком
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированного массива на экран
    for (int i = 0; i < 10; i++) {
     arr[i].print();
    }
    cout << endl;

    delete [] arr; // освобождение памяти;
    
    return 0;
}
}

