// Char Pointer Ops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char *color[6] = {"red","green","blue","white","black","yellow"};
	cout << "\ncolor" << color;
	cout << "\n(color+2)" << (color+2);
	cout << "\n(*color)" << *color;
	cout << "\n(*color+2)" << (*color+2);
	cout << "\n(*color+5)" << (*color+5);
	cout << "\n(color[5])" << (color[5]);
	system("pause");
    return 0;
}

