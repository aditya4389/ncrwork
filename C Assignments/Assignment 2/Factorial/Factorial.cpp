// Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void fact(int n)
{
	int fact = 1,i = 0;
	for (i = n; i > 0; i--)
	{
		fact = fact*i;
	}
	cout << fact;
}

int main()
{
	int n;
	printf("Enter a number\n");
	cin >> n;
	fact(n);
	system("pause"); 
    return 0;
}

