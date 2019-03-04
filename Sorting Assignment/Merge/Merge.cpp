// Merge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int ch;
int a[100];
int n;

void display();

void merge(int a[], int l, int mid, int h)
{
	int n1, n2, i, j, k;
	n1 = mid - l + 1;
	n2 = h - mid;

	int L[100], R[100];

	for (i = 0; i < n1; i++)
	{
		L[i] = a[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[i] = a[mid + 1 + j];
	}


	if (ch == 1)
	{
	    k = l;
		i = 0; j = 0;
		while (i < n1 && j < n2)
		{
			if (L[i] <= R[j])
			{
				a[k] = L[i];
				i++;
			}
			else
			{
				a[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1)
		{
			a[k] = L[i];
			i++;
			k++;
		}
		while (j < n2)
		{
			a[k] = R[j];
			j++;
			k++;
		}
	}
	if (ch == 2)
	{
	    k = l;
		i = 0; j = 0;
		while (i < n1 && j < n2)
		{
			if (L[i] >= R[j])
			{
				a[k] = L[i];
				i++;
			}
			else
			{
				a[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1)
		{
			a[k] = L[i];
			i++;
			k++;
		}
		while (j < n2)
		{
			a[k] = R[j];
			j++;
			k++;
		}
	}
}

void display()
{
	if (ch == 1)
	{
		cout << "The array in ascending order is: ";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	if (ch == 2)
	{
		cout << "The array in decending order is: ";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	if(ch != 1 && ch != 2)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

void mergeSort(int a[], int l, int h)
{
	if (l < h)
	{
		int mid = l + (h - l) / 2;
		mergeSort(a, l, mid);
		mergeSort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}

int main()
{
	//int n;
	cout << "Enter the size of the array\n";
	cin >> n;
	if (n == 0 || n < 0)
	{
		cout << "Enter a valid array size\n";
		system("pause");
		return 0;
	}
	cout << "Enter the array elements\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "The array elements are: ";
	display();
	cout << "\nchoose an option\n1)Ascending Order 2)Decending Order\n";
	//int ch;
    cin >> ch;
	//mergeSort(a, 0, n - 1);
	switch (ch)
	{
	case 1: {
		mergeSort(a, 0, n-1);
		display();
		break;
	}
	case 2: {
		mergeSort(a, 0, n-1);
		display();
		break;
	}
	default: cout << "Enter a valid choice\n";
	}
	//display(a, n);
	system("pause");
    return 0;
}

