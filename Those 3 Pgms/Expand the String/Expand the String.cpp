// Expand the String.cpp  : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string.h>

using namespace std;

int main()
{
	char s1[100];
	cout << "Enter a string: ";
	scanf("%[^\n]s", s1);
	int flag = 0;

	for (int i = 0; i < strlen(s1); i++)
	{
		if (s1[i] == '-')
		{
			if (i != 0 && i != strlen(s1) - 1)
			{
				
				int n1 = s1[i - 1], n2 = s1[i + 1];
				if (n1 >= 65 && n1 <= 90)
				{
					if (n2 >= 65 && n2 <= 90)
					{
						
						for (int j = n1 + 1; j < n2; j++)
						{
							cout << (char)j;
						}
					}
					else
					{
						
					}
				}
				if (n1 >= 97 && n1 <= 122)
				{
					if (n2 >= 97 && n2 <= 122)
					{
						
						for (int j = n1 + 1; j < n2; j++)
						{ 
							cout << (char)j;
						}
					}
					else
					{
						
					}
				}
				if (n1 >= 48 && n1 <= 57)
				{
					if (n2 >= 48 && n2 <= 57)
					{
						
						for (int j = n1 + 1; j < n2; j++)
						{
							cout << (char)j;
						}
					}
					else
					{
						
					}
				}
			}
			else
			{
				flag = 1;
				break;
			}
		}
		else
		{
			cout << s1[i];
		}
	}
	if (flag == 1)
		cout << "Input Error\n";
	cout << "\n";
	system("pause");
	return 0;
}