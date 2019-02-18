// pgm-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


class Time
{
public:
	int hr, min, sec;

	Time()
	{
		hr = 0;
		min = 0;
		sec = 0;
	}

	Time(int h, int m, int s)
	{
		hr = h;
		min = m;
		sec = s;
	}

	void print(Time &t)
	{
		cout << t.hr << ":" << t.min << ":" << t.sec << "\n";
	}

	void sumTime(Time &t1, Time &t2)
	{
		hr = t1.hr + t2.hr;
		if (hr % 24 == 0)
		{
			hr = hr - 24;
		}
		min = t1.min + t2.min;
		if (min >= 60)
		{
			hr = hr + 1;
			min = min - 60;
		}
		sec = t1.sec + t2.sec;
		if(sec>=60)
		{
			min = min + 1;
			sec = sec - 60;
		}
	}

};

int main()
{
	Time t1(23, 59, 50);
	Time t2(21, 20, 24);
	Time t3;
	t3.sumTime(t1, t2);
	t3.print(t3);
	system("pause");
    return 0;
}

