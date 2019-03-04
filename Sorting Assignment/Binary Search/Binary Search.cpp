// Binary Search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int binarySearch(int a[], int l, int h, int ele)
{
	int mid = l + h;
	mid = mid / 2;
	if (a[mid] == ele)
		return mid;
	if (ele <= a[mid])
	{
		return binarySearch(a, 0, mid-1, ele);
	}
	else
	{
		return binarySearch(a, mid+1, h, ele);
	}
	return -1;
}

int main()
{
	int a[100], n;
	cout << "Enter the size of the array\n";
	cin >> n;
	cout << "Enter elements of the array in sorted order\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ele;
	cout << "Enter the element to search\n";
	cin >> ele;
	int pos = binarySearch(a, 0, n - 1, ele);
	if (pos == -1)
	{
		cout << "The element is not present in the array\n";
	}
	else
		cout << "The element is present at pos: " << pos << endl;
	system("pause");
    return 0;
}

