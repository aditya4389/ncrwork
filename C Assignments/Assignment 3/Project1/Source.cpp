// Seperate Signed.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <conio.h>



int main()
{
	int a[100];
	int i = 0, j = 0, n;
	printf("Enter the size of array\n");
	scanf_s("%d", &n);
	printf("Enter the elements of array\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", a[i]);
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

	_getch();
	return 0;
}

