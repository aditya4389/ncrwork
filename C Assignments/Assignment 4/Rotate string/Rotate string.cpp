// Rotate string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char ch[100];
	cout << "Enter a string\n";
	scanf("%s", ch);
	int len = 0;
	while (ch[len] != '\0')
	{
		len++;
	}
	cout << "\nThe rotated strings are: ";
	for (int i = 0; i < len; i++)
	{
		cout << "\n";
		for (int j = i; j < len - i; j++)
		{
			cout << ch[j];
		}
		for (int k = 0; k < i; k++)
		{
			cout << ch[k];
		}
	}
	system("pause");
    return 0;
}

