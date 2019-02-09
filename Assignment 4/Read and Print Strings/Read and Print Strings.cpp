// Read and Print Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char *ch[256];
	int n;
	cout << "Enter the number of names to be entered\n";
	cin >> n;
	char temp[100];
	cout << "Enter the names:\n";
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s", temp);
		int len = strlen(temp);
		*ch = (char*)malloc(len * sizeof(char));
		for (int j = 0; j < len; j++)
		{
			*ch[i] = temp[i];
		}
		for (int j = 0; j < len; j++)
		{
			cout << *ch[j];
		}

	}
	system("pause");
    return 0;
}

