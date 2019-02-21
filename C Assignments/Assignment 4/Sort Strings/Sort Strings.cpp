// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>


using namespace std;


int main()
{
	char *a[4];
	int n, i, j;
	int x, y, k;
	for (i = 0; i < 4; i++)
	{
		cin >> n;
		a[i] = (char *)malloc(n * sizeof(char*));
		scanf("%s", a[i]);
		/*if (a[i] == NULL)
		{
		for (j = i; j >= 0; j--)
		{
		free(a[i]);
		}
		return -1;
		}*/
	}
	for (x = 0; x < 4; x++)
	{
		for (y = 0; y < 4 - x - 1; y++)
		{
			if (strcmp(a[y], a[y + 1]) > 0)
			{
				char *temp;
				temp = a[y];
				a[y] = a[y + 1];
				a[y + 1] = temp;
			}
		}
	}
	for (k = 0; k < 4; k++)
	{
		cout << a[k] << "\n";
	}
	system("pause");
	return 0;
}