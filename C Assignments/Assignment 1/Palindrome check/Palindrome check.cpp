// Palindrome check.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void palindrome(int n)
{
	int num, rev = 0, rem;
	num = n;
	while (n > 0)
	{
		rem = n % 10;
		rev = (rev * 10) + rem;
		n = n / 10;
	}
	if (rev == num)
	{
		cout << "Palindrome";
	}
	else
		cout << "Not a Palindrome";

}

int main()
{
	int n;
	cout << "Enter a number\n";
	cin >> n;
	palindrome(n);
	system("pause");
    return 0;
}

