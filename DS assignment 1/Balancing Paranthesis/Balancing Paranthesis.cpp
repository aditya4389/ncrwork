// Balancing Paranthesis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stack>
#include <iostream>
#include<string>
using namespace std;

int main()
{
	stack<char>s;
	string str;
	int flag = 0;
	cout << "Enter Expression\n";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			s.push(str[i]);
		}
		//if ((!s.empty()) && ((str[i] == ')' &&	s.top() == '(') || (str[i] == ']' && s.top() == '[') || (str[i] == '}' && s.top() == '{')))
		else 
		{
			//s.pop();
			if (str[i] == ')')
			{
				if (!s.empty())
				{
					if (s.top() == '(')
					{
						s.pop();
					}
				}
				else
				{
					flag == 1;
				}
			}

			if (str[i] == '}')
			{
				if (!s.empty())
				{
					if (s.top() == '{')
					{
						s.pop();
					}
				}
				else
				{
					flag == 1;
				}
			}

			if (str[i] == ']')
			{
				if (!s.empty())
				{
					if (s.top() == '[')
					{
						s.pop();
					}
				}
				else
				{
					flag == 1;
				}
			}
		}
	}
	if (s.empty() && flag == 0)
		cout << "Balanced\n";
	else
		cout << "Not Balanced\n";
	system("pause");
}