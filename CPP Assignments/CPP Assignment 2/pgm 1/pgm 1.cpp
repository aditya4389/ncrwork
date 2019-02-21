// pgm 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Polar
{
	int a, r;
	static int count;
public:
	void setCount()
	{
		a = 10;
		r = 2;
		count++;
	}
	static void showCount()
	{
		cout << "The count is: " << count;
	}
};
int Polar::count = 0;
int main()
{
	Polar t1, t2;
	t1.setCount();
	t2.setCount();
	Polar::showCount();
	system("pause");
    return 0;
}

