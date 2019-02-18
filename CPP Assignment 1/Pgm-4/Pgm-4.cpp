// Pgm-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


class Inline
{

public:

	int a, b;
	Inline()
	{
		a = 10, b = 3;
	}
	void add();
	void sub();
	void mul();
	void div();
	void mod();
};

inline void Inline :: add()
{
	int c = a + b;
	cout << "Sum: " << c << endl;
}

inline void Inline :: sub()
{
	int c = a - b;
	cout << "Diff: " << c << endl;
}

inline void Inline :: mul()
{
	int c = a * b;
	cout << "Mul: " << c << endl;
}

inline void Inline :: div()
{
	int c = a / b;
	cout << "Div: " << c << endl;
}

inline void Inline :: mod()
{
	int c = a % b;
	cout << "Mod: " << c << endl;
}

int main()
{
	Inline i;
	i.add();
	i.sub();
	i.mul();
	i.div();
	i.mod();
	system("pause");
    return 0;
}

