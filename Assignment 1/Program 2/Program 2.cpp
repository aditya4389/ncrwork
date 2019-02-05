// Program 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int armstrong(int n)
{
	int sum = 0, r;
	int num = n;
	while (n > 0)
	{
		r = n % 10;
		sum = sum + (r*r*r);
		n = n / 10;
	}
	if (num == sum)
		return 1;
	else return 0;
}

int main()
{
	int n;
	printf("Give a number to check for armstrong number \n");
	scanf_s("%d", &n);
	if (armstrong(n))
		printf("Yes");
	else
		printf("No");
	_getch();
    return 0;
}

