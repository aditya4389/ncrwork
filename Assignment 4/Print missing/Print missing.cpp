// Print missing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char s[100];
	char ch = '-';
	int len = 0, r;
	cout << "Enter the array\n";
	scanf_s("%s", s, 100);
	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len-1; i >= 0; i--)
	{
		if (s[i] == ch)
		{
			
		}
	}
	system("pause");
    return 0;
}

