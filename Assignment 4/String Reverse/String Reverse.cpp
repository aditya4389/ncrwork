// String Reverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void strReverse(char *ch)
{
	if (*ch)
	{
		strReverse(ch + 1);
		printf("%c", *ch);
	}
}

int main()
{
	char ch[100];
	cout << "Enter a string to reverse\n";
	scanf_s("%[^\n]s", ch, 100);
	strReverse(ch);
	system("pause");
    return 0;
}

