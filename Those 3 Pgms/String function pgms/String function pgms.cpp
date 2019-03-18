// String function pgms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void strcpy_own(char *s1, char *s2)
{
	while ((*s2 = *s1) != '\0')
	{
		s2++;
		s1++;
	}
	*s1 = '\0';
}

void strcat_own(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		s1++;
	}
	while ((*s1 = *s2) != '\0')
	{
		s1++;
		s2++;
	}
}

int strcmp_own(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;

}

void strrev_own(char *s1, int l, int h)
{
	char ch;
	if (l >= h)
		return;

	ch = *(s1 + l);
	*(s1 + l) = *(s1 + h);
	*(s1 + h) = ch;

	strrev_own(s1, ++l, --h);
}

int main()
{
	int choice;
	while (1)
	{
		cout << "\n1)strrev()-Reverse a string \n\n2)strcpy()-Copy a string into another \n\n3)strcat()-Concatenate two strings \n\n4)strcmp()-Compare two strings \n\n5)Exit \n\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "-------------------------------------------------Reversing a string---------------------------------------------------\n";
			cout << "Enter a string\n";
			char case1[100];
			scanf(" %[^\n]s", case1);
			strrev_own(case1, 0, strlen(case1) - 1);
			cout << "Reversed String is : " << case1 << "\n";
			cout << "-------------------------------------------------------------------------------------------------------------------------\n";
			break;
		case 2:
			cout << "----------------------------------------Copying first string into second string-------------------------------------------\n";
			cout << "Enter two strings\n";
			char case21[100];
			char case22[100];
			scanf(" %[^\n]s", case21);
			scanf(" %[^\n]s", case22);
			cout << "First String Before: " << case21 << "\n";
			cout << "Second String Before: " << case22 << "\n";
			strcpy_own(case21, case22);
			cout << "First String After: " << case21 << "\n";
			cout << "Second String After: " << case22 << "\n";
			cout << "-------------------------------------------------------------------------------------------------------------------------\n";
			break;
		case 3:
			cout << "-----------------------------------------Second string is concatenated with the first---------------------------------------\n";
			cout << "Enter two strings\n";
			char case31[100];
			char case32[100];
			scanf(" %[^\n]s", case31);
			scanf(" %[^\n]s", case32);
			cout << "Before: " << case31 << "\n";
			strcat_own(case31, case32);
			cout << "After: " << case31 << "\n";
			cout << "-------------------------------------------------------------------------------------------------------------------------\n";
			break;
		case 4:
			cout << "------------------------------------------------------compare two strings-------------------------------------------------\n";
			cout << "Enter two strings\n";
			char case41[100];
			char case42[100];
			scanf(" %[^\n]s", case41);
			scanf(" %[^\n]s", case42);
			int returnValue;
			returnValue = strcmp_own(case41, case42);
			if (returnValue > 1)
				cout << "First String is Bigger\n";
			else if (returnValue == 0)
				cout << "Both Strings are equal\n";
			else
				cout << "Second String is Bigger\n";
			cout << "-------------------------------------------------------------------------------------------------------------------------\n";
			break;
		case 5:
			cout << "Exiting the program now\n";
			exit(0);
		default:
			cout << "Please enter a valid choice\n";
			cout << "-------------------------------------------------------------------------------------------------------------------------\n";
			break;
		}
	}
	system("pause");
	return 0;
}