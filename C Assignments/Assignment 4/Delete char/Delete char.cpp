// Delete char.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char ch[100];
	char c;
	cout << "Enter the string and the character\n";
	cin >> c;
	scanf_s("%s", ch, 100);
	int len = 0, j = 0;
	while (ch[len] != '\0')
	{
		len++;
	}
	cout << "\nThe string is: " ;
	for (int k = 0; k < len; k++)
	{
		cout << ch[k];
	}
	for (int i = 0; i < len; i++)
	{
		if (ch[i] == c)
		{
			len = len - 1;
			for (j = i; j < len; j++)
			{
				ch[j] = ch[j + 1];
			}
		}
	}
	cout << "\nThe string after is: ";
	for (int k = 0; k < len; k++)
	{
		cout << ch[k];
	}
	system("pause");
    return 0;
}

