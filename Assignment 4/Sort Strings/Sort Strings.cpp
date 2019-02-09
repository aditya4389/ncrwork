// Sort Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char ch[100][100] , temp[100];
	cout << "Enter the count of strings\n";
	int n,m;
	cin >> n >> m;
	cout << "Enter the strings\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ch[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (strcmp(ch[j], ch[j + 1]) > 0)
			{
				strcpy_s(temp, ch[j]);
				strcpy_s(ch[j], ch[j+1]);
				strcpy_s(ch[j+1], temp);
			}
		}
	}
	cout << "Strings after sorting are: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << ch[i][j];
		}
		cout << "\n";
	}
	system("pause");
    return 0;
}

