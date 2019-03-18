// pgm-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
int L_search(T *arr, int n, T x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
	}
	return -1;
}

template<>
int L_search(char **arr, int n, char *x)
{
	for (int i = 0; i < n; i++)
	{

		if (strcmp(arr[i], x) == 0)
			return i;
	}
	return -1;
}
int main()
{
	while (1)
	{
		cout << "1) Int  2) Double  3) String  4) Exit\n";
		int ch, ind = 0, ind1 = 0, ind2 = 0;
		cin >> ch;
		switch (ch)
		{
		case 1:
			int arrInt[10], n;
			cout << "Enter Size of IntArray\n";
			cin >> n;
			cout << "Enter Int Array Elements\n";
			for (int i = 0; i < n; i++)
			{
				cin >> arrInt[i];
			}
			cout << "Enter Element to Search: ";
			int x;
			cin >> x;
			ind = L_search(arrInt, n, x);
			if (ind == -1)
				cout << "Element Not Found\n";
			else
				cout << "Element Found at Index: " << ind << "\n";
			break;

		case 2:
			double arrDouble[10], x1;
			int n1;
			cout << "Enter Size of DoubleArray\n";
			cin >> n1;
			cout << "Enter Double Array Elements\n";
			for (int i = 0; i < n1; i++)
			{
				cin >> arrDouble[i];
			}
			cout << "Enter Element to Search: ";
			cin >> x1;
			ind1 = L_search(arrDouble, n1, x1);
			if (ind1 == -1)
				cout << "Element Not Found\n";
			else
				cout << "Element Found at Index: " << ind1 << "\n";
			break;

		case 3:

			char *str[5];
			cout << "Enter Num of Strings\n";
			int n2;
			cin >> n2;
			for (int i = 0; i < n2; i++)
			{
				str[i] = (char *)malloc(n2 * sizeof(char *));
			}
			for (int i = 0; i < n2; i++)
			{
				cout << "Enter String " << i + 1 << "\n";
				char temp[10];
				cin >> temp;
				strcpy(str[i], temp);
			}

			char x2[10];
			cout << "Enter String to search\n";
			cin >> x2;
			ind2 = L_search(str, 3, x2);
			if (ind2 == -1)
				cout << "String Not Found\n";
			else
				cout << "String Found at Index: " << ind2 << "\n";
			break;
		case 4:
		abc:
			cout << "Do you want to exit?\n1) yes(press Y) 2) No(press N)\n";
			char ch;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				exit(0);
			}
			else if(ch == 'n' || ch == 'N')
			{
				break;
			}
			else
			{
				cout << "Enter a valid input\n";
				goto abc;
			}
		default: cout << "Enter a valid choice\n";
		}
	}
	system("pause");
}
