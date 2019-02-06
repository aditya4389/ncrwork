// Subarray Sum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int a[100];
	int j = 0,flag = 0,sum = 0,n = 0,i = 0,count;
    printf("Enter the size of the array\n");
	cin >> n;
	printf("Enter the elements of the array\n");
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	printf("Enter the sum to be found\n");
	cin >> sum;

	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = i; j < n; j++)
		{
			count = count + a[j];
			if (count == sum)
			{
				printf("The sum exists between %d and %d indices\n", i,j);
				flag=1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

	system("pause");
    return 0;
}

