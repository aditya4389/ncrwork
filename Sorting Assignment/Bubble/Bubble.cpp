// Bubble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the array\n";
	cin >> n;
	if (n == 0 || n < 0)
	{
		cout << "Enter a valid array size\n";
		system("pause");
		return 0;
	}
	cout << "Enter the array elements\n";
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "choose an option\n1)Descending Order 2)Ascending Order\n";
	int ch;
	cin >> ch;
	switch (ch)
	{
	case 1: {
		for (int i = 0; i < n-1; i++)
		{
			for (int j = 0; j < n-i-1; j++)
			{
				if (a[j] < a[j+1])
				{
					a[j] = a[j] + a[j+1];
					a[j+1] = a[j] - a[j+1];
					a[j] = a[j] - a[j+1];
				}
			}
		}
		cout << "The array in decending order is : \n";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		break;
	}
	case 2: {
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (a[j] > a[j + 1])
				{
					a[j] = a[j] + a[j + 1];
					a[j + 1] = a[j] - a[j + 1];
					a[j] = a[j] - a[j + 1];
				}
			}
		}
		cout << "The array in ascending order is : \n";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		break;
	}
	default:cout << "Invalid choice\n";
	}
	
	system("pause");
    return 0;
}

