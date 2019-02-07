// Pointer Ops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int x[8] = { 10,20,30,40,50,60,70,80 };
	printf("Meaning of x: %d\n",x);
	printf("Meaning of (x+2): %d\n",(x+2));
	printf("Value of *x: %d\n",*x);
	printf("Value of (*x+2): %d\n",(*x+2));
	printf("Value of *(x+2): %d\n",(*x+2));
	system("pause");
    return 0;
}

