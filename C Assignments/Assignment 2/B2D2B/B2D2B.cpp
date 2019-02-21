// B2D2B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void decToBin(int dec)
{
	int bin = 0, base = 1, rem;
	while (dec > 0)
	{
		rem = dec % 2;
		bin = bin + base*rem;
		base = base * 10;
		dec = dec / 2;
	}
	printf("\nThe corresponding binary is: %d\n", bin);
}

void binToDec(int bin)
{
	int dec = 0, rem, base = 1;
	while (bin > 0)
	{
		rem = bin % 10;
		dec = dec + rem*base;
		base = base * 2;
		bin = bin / 10;
	}
	printf("\nThe corresponding decimal is: %d\n", dec);
}

int main()
{
	int dec,bin;
	printf("Enter a decimal number\n");
	scanf_s("%d", &dec);
	decToBin(dec);
	printf("Enter a binary number\n");
	scanf_s("%d", &bin);
	binToDec(bin);
	system("pause");
    return 0;
}

