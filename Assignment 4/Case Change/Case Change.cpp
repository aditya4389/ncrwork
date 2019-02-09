// Case Change.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	int i = 0, len = 0;
	char ch[100];
	cout << "Enter the size of the array\n";
	cin >> len;
	cout << "Enter the array elements\n";
	for (i = 0; i < len; i++)
	{
		cin >> ch[i];
	}
	//scanf_s("%[\n]s", ch, 100);
	//len = strlen(ch);
	for (i = 0; i < len; i++)
	{
		if (isupper(ch[i]))
		{
			ch[i] = ch[i] + 32;
		}
		else
		{
			ch[i] = ch[i] - 32;
		}
	}
	cout << "\nThe elements after case change are: ";
	for (i = 0; i < len; i++)
	{
		cout << ch[i] << " ";
	}
	system("pause");
    return 0;
}

