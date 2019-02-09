// Table Ops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	float table[2][3] = { {1.1,1.2,1.3},{2.1,2.2,2.3} };
	cout << "Table: " << table;
	cout << "\n";
	cout << "(Table+1): " << (table+1);
	cout << "\n";
	cout << "*(Table+1): " << *(table+1);
	cout << "\n";
	cout << "(*(Table+1)+1): " << (*(table+1)+1);
	cout << "\n";
	cout << "(*(Table)+1): " << (*(table)+1);
	cout << "\n";
	cout << "*(*(Table+1)+1): " << (*(table + 1) + 1);
	cout << "\n";
	cout << "*(*(Table)+1): " << *(*(table)+1);
	cout << "\n";
	cout << "*(*(Table+1)): " << *(*(table + 1));
	cout << "\n";
	cout << "*(*(Table)+1)+1: " << *(*(table)+1) + 1;
	cout << "\n";
	system("pause");
    return 0;
}

