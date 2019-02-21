// Spaces Replace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char ch[100];
	cout << "Enter a string\n";
	scanf("%[^\n]s", ch, 100);
	int count = 0;
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		if (ch[i] == ' ')
		{
			count++;
			ch[i] = '-';
			
		}
	}
	cout << "\nThe number of spaces replaces are: " << count;
	system("pause");
    return 0;
}

