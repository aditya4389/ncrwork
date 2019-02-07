// Integer ops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0, a[100], n, count = 0, i = 0;
	float avg = 0;
	cout << "Enter the elements\n";
	while (1)
	{
		cin >> n;
		if (n < 0 || n == 0)
			break;
		else
		{
			a[i] = n;
			sum = sum + a[i];
			i++;
			count++;
		}
	}
	avg = (float) sum / count;
	int max = a[0], min = a[0];
	for (i = 0; i < count; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << "The number of positive : " << count << "\n";
	cout << "Maximum: " << max << "\n";
	cout << "Minimum: " << min << "\n";
	cout << "Sum: " << sum << "\n";
	cout << "Average: " << avg << "\n";
	system("pause");
    return 0;
}

