// CAFE question.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long int binToDec(long long int bin)
{
	long int dec = 0;
	int  rem, base = 1;
	while (bin > 0)
	{
		rem = bin % 10;
		dec = dec + rem*base;
		base = base * 2;
		bin = bin / 10;
	}
//	printf("\nThe corresponding decimal is: %d\n", dec);
	return dec;
}

int main()
{
	int i, j = 0, r, base = 1;
	long long int bin = 0;
	//int hex[16] = { 0, 1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111 };
	char h[10];
	printf("enter a hexadecimal number\n");
	cin >> h;
	for (i = 0; h[i] != '\0'; i++)
	{
		switch (h[i])
		{
		case '0': {
			bin = bin * 10000 + 0000;
			break; }
		case '1': {
			bin = bin * 10000 + 0001;
			break; }
		case '2': {
			bin = bin * 10000 + 0010;
			break; }
		case '3': {
			bin = bin * 10000 + 0011;
			break; }
		case '4': {
			bin = bin * 10000 + 0100;
			break; }
		case '5': {
			bin = bin * 10000 + 0101;
			break; }
		case '6': {
			bin = bin * 10000 + 0110;
			break; }
		case '7': {
			bin = bin * 10000 + 0111;
			break; }
		case '8': {
			bin = bin * 10000 + 1000;
			break; }
		case '9': {
			bin = bin * 10000 + 1001;
			break; }
		case 'A': {
			bin = bin * 10000 + 1010;
			break; }
		case 'B': {
			bin = bin * 10000 + 1011;
			break; }
		case 'C': {
			bin = bin * 10000 + 1100;
			break; }
		case 'D': {
			bin = bin * 10000 + 1101;
			break; }
		case 'E': {
			bin = bin * 10000 + 1110;
			break; }
		case 'F': {
			bin = bin * 10000 + 1111;
			break; }
		}

	}
	cout << "The binary equivalent for the given hexadecimal is: " << bin;
	long int rem, num1, num2 = 15;
	long long int test = 1111, b = bin;
	num1 = binToDec(bin);
	num2 = binToDec(test);
	int res = num1 & num2;
	//cout << "\n" << num1 << "\n" << num2 << "\n" << res << "\n";
	if (res == 15 || res == 14 || res == 13 || res == 11 || res == 7)
	{
		cout << "\nThere are atleast 3 1's in the given hexadecimal number in the last 4 bits";
	}
	else
	{
		cout << "\nThere are'nt atleast 3 1's in the given hexadecimal number in the last 4 bits";
	}

	cout << "\nThe number after bytes are reverse is: ";
	while (b > 0)
	{
		rem = b % 100000000;
		cout << rem;
		b = b / 100000000;
	}

	cout << "\nThe number after bytes are circular shifted is: ";

	rem = bin % 10000;
	cout << rem;
	bin = bin / 10000;
	cout << bin;
	system("pause");
	return 0;
}
