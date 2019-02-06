// Seperate Signed.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int a[100];
	int i = 0, j = 0, n;
	printf("Enter the size of array\n");
	cin >> n;
	printf("Enter the elements of array\n");
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	printf("The array before modifying is: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	for (j = 0; j < n; j++)
	{
		for (i = j; i < n; i++)
		{
			if (a[j] > a[i])
			{
				a[j] = a[i] + a[j];
				a[j] = a[j] - a[i];
				a[i] = a[j] - a[i];
			}
		}
	}
	printf("The array after modifying is: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}

	system("pause");
	return 0;
}

