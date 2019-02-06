// Invert Part Binary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	long long int n;
	int a[100],b[100],j = 0,i = 0,count = 0;
	int s, e;
	printf("Enter the number and starting and ending indices to reverse\n");
	cin >> n >> s >> e;
	while (n > 0)
	{
		count++;
		a[i] = n % 2;
		n = n / 2;
	}
	for (i = count-1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (i = s; i < e; i++)
	{
		if (b[i] == 1)
			b[i] = 0;
		else
			b[i] = 1;
	}
	printf("\nThe array after modifying is: ");
	for (i = 0; i < count; i++)
	{
		printf("%d ", b[i]);
	}
	system("pause");
    return 0;
}

