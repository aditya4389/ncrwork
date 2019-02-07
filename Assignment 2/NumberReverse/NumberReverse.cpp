// NumberReverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void rev(int n)
{
	int rev = 0, rem, num;
	num = n;
	while (n > 0)
	{
		rem = n % 10;
		rev = rev*10 + rem;
		n = n / 10;
	}
	cout << "The number "<<num<<" after reversing is :  "<< rev;
}

int main()
{
	int n;
	cout << "Enter a number\n";
	cin >> n;
	rev(n);
	system("pause");
    return 0;
}

