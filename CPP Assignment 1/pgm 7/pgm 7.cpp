// pgm 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Matrix
{
	int r, c;
	int a[10][10];
public:
	Matrix()
	{
	}
	Matrix(int ar[][10], int row, int col)
	{
		r = row;
		c = col;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				a[i][j] = ar[i][j];
			}
		}
	}

	friend void multiply(Matrix &m1, Matrix &m2);

};

void multiply(Matrix &m1, Matrix &m2)
{
	Matrix m3;
	for (int i = 0; i < m1.r; i++)
	{
		for (int j = 0; j < m2.c; j++)
		{
			m3.a[i][j] = 0;
		}
	}
	for (int i = 0; i < m1.r; i++)
	{
		for (int j = 0; j < m2.c; j++)
		{
			for (int k = 0; k < m1.c; k++)
			{
				m3.a[i][j] = m3.a[i][j] + m1.a[i][k] * m2.a[k][j];
			}
		}
	}
	cout << "The array after the product is: " << endl;
	for (int i = 0; i < m1.r; i++)
	{
		for (int j = 0; j < m2.c; j++)
		{
			cout << m3.a[i][j] << " ";
		}
	}
}

int main()
{
	int r, c;
	int a[10][10];
	cout << "Enter the rows, coloums, array elements for m1\n";
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}
	Matrix m1(a, r, c);
	cout << "Enter the rows, coloums, array elements for m2\n";
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}
	Matrix m2(a, r, c);
	multiply(m1, m2);
	system("pause");
    return 0;
}

