// pgm-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Student
{

public:
	string stname;
	char grade;
	int m1, m2, m3;


	void set_data(string name, char g, int a, int b, int c)
	{
		stname = name;
		grade = g;
		m1 = a;
		m2 = b;
		m3 = c;
	}

	float calAverage()
	{
		return (m1 + m2 + m3) / 3;
	}

	void computeGrade(float avg)
	{
		if (avg > 60)
		{
			cout << "\nFirst class\n";
		}
		else if (avg > 50 && avg < 60)
		{
			cout << "\nSecond class\n";
		}
		else if (avg > 40 && avg < 50)
		{
			cout << "\nThird class\n";
		}
		else
		{
			cout << "\nFail\n";
		}
	}

	void display()
	{
		cout << "Student name: " << stname << "\nGrade: " << grade << "\nMarks-1: " << m1 << "\nMarks-2: " << m2 << "\nMarks-3: " << m3;
	}

};

int main()
{
	Student s1;
	s1.set_data("Aditya", 'A', 80, 85, 81);
	float avg = s1.calAverage();
	s1.computeGrade(avg);
	s1.display();
	system("pause");
    return 0;
}

