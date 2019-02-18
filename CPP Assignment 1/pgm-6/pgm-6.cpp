// pgm-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

class Point
{
	int x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	friend float dist(Point &p1, Point &p2);
};

float dist(Point &p1, Point &p2)
{
	float dist;
	dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	return dist;
}

int main()
{
	int a, b;
	cout << "Enter the coordinates of p1\n";
	cin >> a >> b;
	Point p1(a, b);
	cout << "Enter the coordinates of p2\n";
	cin >> a >> b;
	Point p2(a, b);
	cout << "\nThe distance between the points is: " << dist(p1, p2);
	system("pause");
    return 0;
}

