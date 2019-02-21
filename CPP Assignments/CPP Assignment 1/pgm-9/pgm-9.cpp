// pgm-9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Swap
{
	int a, b;
public:
	Swap(int x, int y)
	{
		a = x;
		b = y;
	}
	void valueSwap(Swap s)
	{
		s.a = s.a + s.b;
		s.b = s.a - s.b;
		s.a = s.a - s.b;
		cout << "The values of a and b are: " << s.a << " " << s.b << endl;
	}
	void refSwap(Swap &s)
	{
		s.a = s.a + s.b;
		s.b = s.a - s.b;
		s.a = s.a - s.b;
		cout << "The values of a and b are: " << a << " " << b << endl;
	}
};

int main()
{
	int a, b;
	cout << "Enter the values of a and b\n";
	cin >> a >> b;
	Swap s(a, b);
	int ch;
	cout << "Enter the choice\n1)Call By Value 2)Call By Reference\n";
	cin >> ch;
	if (ch == 1)
	{
		s.valueSwap(s);
	}
	if (ch == 2)
	{
		s.refSwap(s);
	}
	system("pause");
    return 0;
}

