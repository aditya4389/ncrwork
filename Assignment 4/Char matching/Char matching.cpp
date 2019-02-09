// Char matching.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char s1[100], s2[100];
	cout << "Enter the strings\n";
	scanf_s("%s%s", s1, s2);
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	for (int i = 0; i < l1; i++)
	{
		for (int j = 0; j < l2; j++)
		{
			if (s1[i] == s2[j])
			{
				ans

			}
		}
	}
	system("pause");
    return 0;
}

