// String Delete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char s1[100], s2[100];
	char c;
	cout << "Enter the strings\n";
	scanf_s("%s", s1, 100);
	scanf_s("%s", s2, 100);
	int l1 = 0, l2 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	for (int i = 0; i < l1; i++)
	{
		for (int j = 0; j < l2; j++)
		{
			if (s1[i] == s2[j])
			{
				c = s2[j];
			}
			for (int i = 0; i < l1; i++)
			{
				if (s1[i] == c)
				{
					l1 = l1 - 1;
					for (j = i; j < l1; j++)
					{
						s1[j] = s1[j + 1];
					}
				}
			}
		}
	}
	cout << "The string after modificaion is: ";
	for (int i = 0; i < l1; i++)
	{
		cout << s1[i];
	}
	system("pause");
    return 0;
}

