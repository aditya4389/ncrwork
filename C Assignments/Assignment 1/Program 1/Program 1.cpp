// Program 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void sum(int n);
int main()
{
	int n;
	printf("enter any number\n");
	scanf_s("%d", &n);
	sum(n);
	_getch();
    return 0;
}

void sum(int n)
{
	int r=0, sum=0;
	int num = n;
	while (n > 0)
	{
		r = n % 10;
		sum = sum + r;
		n = n / 10;
	}
	printf("The sum of digits of %d is : %d", num, sum);
}

