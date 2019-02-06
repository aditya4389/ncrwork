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
	printf("\nThe array before modifying is: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i] < a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	printf("\nThe array after modifying is: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}

