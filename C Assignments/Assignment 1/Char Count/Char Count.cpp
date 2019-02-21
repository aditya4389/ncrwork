// Char Count.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using  namespace std;


int main()
{
	char ch[256];
	int len = 0,i = 0,Ac = 0, Dc = 0, Sc = 0, Tc = 0;
	printf("Enter random characters into the character array\n");
	scanf_s("%[^\n]s", ch, 256);
	while (ch[i] != '\0')
	{
		len++;
		i++;
	}
	printf("\nThe length of the array is: %d\n", len);

	for (i = 0; i < len; i++)
	{
		if (isalpha(ch[i]))
			Ac++;
		if (isdigit(ch[i]))
			Dc++;
		if (ch[i]==' ')
			Sc++;
		if (ch[i]=='\t')
			Tc++;
	}

	printf("The count of digits is: %d\n The count of alphabets is: %d\nThe count of spaces is: %d\nThe count pf tabs is: %d\n", Dc, Ac, Sc, Tc);
	system("pause");
    return 0;
}

