// pgm-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Complex
{
	int real, img;
public:
	Complex()
	{
		real = img = 0;
	}

	Complex(int a)
	{
		real = img = a;
	}

	Complex(int a, int b)
	{
		real = a;
		img = b;
	}
	void display()
	{
		cout << real << "+" << img << "i" << endl;
	}

	friend void addComplex(Complex &c1, Complex &c2);
	friend void mulComplex(Complex &c1, Complex &c2);
};


void addComplex(Complex &c1, Complex &c2)
{
	Complex c;
	c.real = c1.real + c2.real;
	c.img = c1.img + c2.img;
	c.display();
}

void mulComplex(Complex &c1, Complex &c2)
{
	Complex c;
	c.real = c1.real*c2.real - c1.img*c2.img;
	c.img = c1.img * c2.real + c1.real * c2.img;
	c.display();
}

int main()
{

	int a, b, c;
	cout << "Enter the numbers\n";
	cin >> a >> b >> c;
	Complex c1(a), c2(b,c);
	addComplex(c1, c2);
	mulComplex(c1, c2);
	system("pause");
    return 0;
}

