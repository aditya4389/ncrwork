// D2B2H.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void itob(int dec)
{
	int bin = 0, base = 1, rem;
	while (dec > 0)
	{
		rem = dec % 2;
		bin = bin + base*rem;
		base = base * 10;
		dec = dec / 2;
	}
	printf("\nThe corresponding binary is: %d\n", bin);
}


int main()
{
	int dec;
	cout << "Enter the decimal number\n";
	cin >> dec;
	itob(dec);
	system("pause");
	return 0;
}

