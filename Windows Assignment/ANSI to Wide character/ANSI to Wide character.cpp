// ANSI to Wide character.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<windows.h>
#include <iostream>
using namespace std;

int main()
{
	char ch = 'P';
	wchar_t wch = L'S';

	char ar[] = "Normal Char";
	wchar_t war[] = L"Wide Char"; //L should be used infront of the value entered into the wchar datatype


	// We should use wcout to print wide char data types
	wcout << ch << " " << wch << "\n";
	wcout << ar << " " << war << "\n"; 

	printf("Char is : %c\n", ch);
	printf("Char in WideChar is : %c\n", wch);

	printf("String is : %s\n", ar);
	// For wchar we use %S and also we can use %ws
	printf("String in WideChar is : %S\n", war); 


	//IsTextUnicode(array-name, array-length+1, testing criteria) return boolean value
	//Above function is used to test whether datatype is unicode or not
	//NULL will redirect to the testing criteria writen in windows by default
	//Windows unicode testing criteris is not so perfect
	//Giving a string of large lengths will give us better results
	BOOL ret = IsTextUnicode(ar, strlen(ar) + 1, NULL);
	BOOL wret = IsTextUnicode(war, wcslen(war) + 1, NULL);

	cout << "\n";
	if (ret == 1)
		printf("%s is Unicode", ar);
	else
		printf("%s is Not Unicode", ar);

	cout << "\n";

	if (wret == 1)
		printf("%S is Unicode", war);
	else
		printf("%S is Not Unicode", war);

	cout << "\n\n";


	//Now we are using typedef values of char and wchar_t
	//These are internally typedefed in windows
	//select them and press fn+f12 to see the typedef code
	CHAR ar1[] = "Normal Char";
	WCHAR war1[] = L"Wide Char";

	printf("String with CHAR is : %s\n", ar1);
	printf("String WCHAR is : %ws\n", war1);

	BOOL ret1 = IsTextUnicode(ar1, strlen(ar1) + 1, NULL);
	BOOL wret1 = IsTextUnicode(war1, wcslen(war1) + 1, NULL);

	cout << "\n";
	if (ret1 == 1)
		printf("%s with CHAR is Unicode", ar1);
	else
		printf("%s with CHAR is Not Unicode", ar1);

	cout << "\n";

	if (wret1 == 1)
		printf("%S with WCHAR is Unicode", war1);
	else
		printf("%S with WCHAR is Not Unicode", war1);

	cout << "\n\n";


	//Instead of using L  infront of the value we can use TEXT("") function 
	wchar_t war2[] = TEXT("Wide Char");

	printf("String using TEXT api is : %ws\n", war1);

	BOOL wret2 = IsTextUnicode(war2, wcslen(war2) + 1, NULL);

	cout << "\n";

	if (wret2 == 1)
		printf("%S using TEXT api is Unicode", war2);
	else
		printf("%S using TEXT api is Not Unicode", war2);

	cout << "\n\n";

	//---------------------------------Multi byte to Wide Character conversion---------------------------------------------
	cout << "\n\nMULTIBYTE TO WIDE CHAR\n\n";
	char abc[] = "I will converts";
	int chSize = strlen(abc);
	char *chptr = abc;

	int value = MultiByteToWideChar(CP_UTF8, 0, chptr, -1, NULL, 0);

	wchar_t *wchptr = NULL;
	wchptr = new wchar_t[value];
	value = MultiByteToWideChar(CP_UTF8, 0, chptr, -1, wchptr, value);

	if (value > 0)
	{
		cout << "The conversion was successful\n";
		BOOL value1 = IsTextUnicode(wchptr, value, NULL);
		if (value1 == 0)
			cout << "The converted string is not unicode\n";
		else
			cout << "The converted string is unicode\n";
		printf("The string converted is: %ws\n", wchptr);
	}
	else
		cout << "The conversion was not successful\n";


	//-----------------------------Wide Character to Multibyte conversion------------------------------------------------------
	cout << "\n\nWIDE CHAR TO MULTIBYTE\n\n";
	char *ptrch = NULL;
	wchar_t valwch[] = TEXT("I also will convert");
	wchar_t *ptrwch = valwch;

	int newValue = WideCharToMultiByte(CP_UTF8, 0, ptrwch, -1, NULL, 0, NULL, NULL);

	ptrch = new char[newValue];

	newValue = WideCharToMultiByte(CP_UTF8, 0, ptrwch, -1, ptrch, newValue, NULL, NULL);

	if (newValue > 0)
	{
		cout << "The conversion was successful\n";
		BOOL value2 = IsTextUnicode(ptrch, newValue, NULL);
		if (value2 == 0)
			cout << "The converted string is not unicode\n";
		else
			cout << "The converted string is unicode\n";
		printf("The string converted is: %s\n", ptrch);
	}
	else
		cout << "The conversion was not successful\n";

	system("pause");
}