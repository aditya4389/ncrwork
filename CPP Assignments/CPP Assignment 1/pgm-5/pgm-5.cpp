// pgm-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Distance2;

class Distance1
{
public:
	int	m, cm;
	double res = 0;
	friend void add(Distance1 &d, Distance2 &d1);
	Distance1(int x, int y)
	{
		m = x;
		cm = y;
	}
	void display()
	{
		cout << "The sum is: " << res << endl;
	}
};

class Distance2
{
public:
	double f, i;
	friend void add(Distance1 &d1, Distance2 &d2);
	Distance2(double x, double y)
	{
		f = x;
		i = y;
	}
};

void add(Distance1 &d1, Distance2 &d2)
{
	int met = d1.m + (0.3048*d2.f);
	int cmet = d1.cm + (2.54*d2.i);
	d1.res = met + (0.01*cmet);
	d1.display();
}

int main()
{
	int a, b;
	double c, d;
	cout << "Enter the values\n";
	cin >> a >> b >> c >> d;
	Distance1 d1(a, b);
	Distance2 d2(c, d);
	add(d1, d2);
	system("pause");
    return 0;
}

