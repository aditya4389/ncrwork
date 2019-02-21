// One's count.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int n, num, r, count = 0;
	printf("Enter the number in binary format\n");
	cin >> num;
	n = num;
	while (n > 0)
	{
		r = n % 10;
		if (r == 1)
			count++;
		n = n / 10;
	}

	printf("\nThe count of one's is: %d\n", count);
	system("pause");
    return 0;
}

