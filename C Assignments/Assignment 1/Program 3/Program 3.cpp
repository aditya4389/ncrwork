// Program 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void pyramid(int n)
{
	int i = 0, j = 0;
	if(n<=0)
	{
		printf("Enter a numer that is greater than 0\n");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < n - i; j++)
			{
				printf(" ");
			}
			for (j = i; j > 1; j--)
			{
				printf("%d", j);
			}
			for (j = 1;j <= i; j++)
			{
				printf("%d", j);
			}
			printf("\n");
		}
	}

}

int main()
{
	int n;
	printf("Enter a numer to build a pyramid\n");
	scanf_s("%d", &n);
	pyramid(n);
	_getch();
    return 0;
}

