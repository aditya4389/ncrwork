// Selection.cpp : Defines the entry point for the console application.
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
	cout << "choose an option\n1)Ascending Order 2)Decending Order\n";
	int ch;
	cin >> ch;
	int temp, j, s;
	switch (ch)
	{
	case 1: {
		for (int i = 0; i < n - 1; i++)
		{
			temp = i;
			for (j = i + 1; j < n; j++)
				if (a[j] < a[temp])
					temp = j;

			s = a[i];
			a[i] = a[temp];
			a[temp] = s;
		}
		cout << "The array in ascending order is : \n";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		break;
	}
	case 2: {
		for (int i = 0; i < n - 1; i++)
		{
			temp = i;
			for (j = i + 1; j < n; j++)
				if (a[j] > a[temp])
					temp = j;

			s = a[i];
			a[i] = a[temp];
			a[temp] = s;
		}
		cout << "The array in ascending order is : \n";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		break;
	}
	default:cout << "The choice is invalid\n";
	}
	system("pause");
    return 0;
}

