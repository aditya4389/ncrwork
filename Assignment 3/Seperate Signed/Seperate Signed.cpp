#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[100];
	int i = 0, j = 0, n = 0;
	cout << "Enter tyhe size of the array\n";
	cin >> n;
	printf("Enter an array of signed integers\n");
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n-1; i++)
		{
			if (a[i] > 0 && a[i + 1] < 0)
			{
				a[i] = a[i] + a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] = a[i] - a[i + 1];
			}
		}
	}
	cout << "\nThe array after arranging is: ";
	for (i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	system("pause");
	return 0;
}

