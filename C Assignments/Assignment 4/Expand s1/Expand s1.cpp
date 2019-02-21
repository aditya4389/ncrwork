// Expand s1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char s1[100], s2[100];
	scanf("%s", s1);
	int len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	int j = 0;
	for (int i = 0; i < len; i++)
	{
		if (s1[i+1] != '-')
		{
			s2[j] = s1[i];
			j++;
		}
		else
		{
			if (isdigit(s1[i]))
			{
				int diff = s1[i + 2] - s1[i];
				s2[j] = s1[i];
				j++;
				i++;
				for (int i = 0; i < diff; i++)
				{
					s2[j] = s2[j - 1] + 1;
					j++;
				}
				i++;
			}
			else
			{
				int diff = s1[i + 2] - s1[i];
				s2[j] = s1[i];
				//s2[j + diff] = s1[i + 2];
				j++;
				i++;
				for (int i = 0; i < diff; i++)
				{
					s2[j] = s2[j - 1] + 1;
					j++;
				}
				i++;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << s1[i];
	}
	cout << "\nThe expanded string is: ";
	for (int i = 0; i < j; i++)
	{
		cout << s2[i];
	}
	system("pause");
    return 0;
}

