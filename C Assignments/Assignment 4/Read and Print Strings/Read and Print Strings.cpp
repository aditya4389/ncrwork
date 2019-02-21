#include "stdafx.h"
#include<iostream>


using namespace std;


int main()
{
	char *a[4];
	int n, i, j;
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
	cout << "The strings are\n";
	for (j = 0; j < 4; j++)
	{
		cout << a[j] << "\n";
	}
	system("pause");
	return 0;
}
