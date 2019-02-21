// PrimeInInterval.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void prime(int s, int e)
{
	int i = 0, j = 0, count = 0;
	cout << "\nThe prime numbers between " << s << " and " << e << " are: ";
	for (i = s; i <= e; i++)
	{
		count = 0;
		for (j = 2; j*j <= i; j++)
		{
			if (i%j == 0)
			{
				count = 1;
				break;
			}
		}
			if (count == 0)
			{
				cout << i <<" ";
			}
	}
}

int main()
{
	int s, e;
	cout << "Enter the starting and ending numbers\n";
	cin >> s >> e;
	prime(s, e);
	system("pause");
    return 0;
}

