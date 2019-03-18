// pgm-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define MAX 5
using namespace std;

template<class t>

class Stack
{
	t data[MAX];
	int top;
public:
	Stack()
	{
		top = -1;
	}
	void push();
	void pop();
	void display();
};

template<class t>
void Stack<t>::push()
{
	try
	{
		if (top == MAX - 1)
			throw top;
		else
		{
			cout << "Enter Data: " << endl;
			t d;
			cin >> d;
			data[++top] = d;
		}
	}
	catch (int a)
	{
		cout << "Stack OverFlow\n";
	}
}

template<class t>
void Stack<t>::pop()
{
	try
	{
		if (top == -1)
			throw top;
		else
		{
			cout << "Popped Data is: " << data[top] << "\n";
			top--;
		}
	}
	catch (int a)
	{
		cout << "Stack UnderFlow\n";
	}
}

template<class t>
void Stack<t>::display()
{
	try
	{
		if (top == -1)
			throw top;
		else
		{
			for (int i = top; i >= 0; i--)
				cout << data[i] << " ";
			cout << "\n";
		}
	}
	catch (int a)
	{
		cout << "Stack Empty\n";
	}
}


int main()
{
	while (1)
	{
		xyz:
		cout << "1) Int Stack 2) Float Stack  3) Exit\n";
		int ch;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			Stack<int >s;
			cout << "For Integer Stack\n\n";

			while (1)
			{

				cout << "1-push  2-pop  3-display 4-exit\n";
				int c;
				cin >> c;
				switch (c)
				{
				case 1:
					s.push();
					break;
				case 2:
					s.pop();
					break;
				case 3:
					s.display();
					break;
				case 4:
				abc:
					cout << "Do you want to exit?\n1) yes(press Y) 2) No(press N)\n";
					char ch;
					cin >> ch;
					if (ch == 'Y' || ch == 'y')
					{
						goto xyz;
					}
					else if (ch == 'n' || ch == 'N')
					{
						break;
					}
					else
					{
						cout << "Enter a valid input\n";
						goto abc;
					}
				default: cout << "Enter a valid choice\n";
				}
			}
		}
		case 2:
		{
			
			Stack<float >s1;
			cout << "For Float Stack\n\n";
			while (1)
			{
				cout << "1) push  2) pop  3) display 4) exit\n";
				int c1;
				cin >> c1;
				switch (c1)
				{
				case 1:
					s1.push();
					break;
				case 2:
					s1.pop();
					break;
				case 3:
					s1.display();
					break;
				case 4:
				bcd:
					cout << "Do you want to exit?\n1) yes(press Y) 2) No(press N)\n";
					char ch;
					cin >> ch;
					if (ch == 'Y' || ch == 'y')
					{
						goto xyz;
					}
					else if (ch == 'n' || ch == 'N')
					{
						break;
					}
					else
					{
						cout << "Enter a valid input\n";
						goto bcd;
					}
				default: cout << "Enter a valid choice\n";
				}
			}
		}
		case 3:
		cde:
			cout << "Do you want to exit?\n1) yes(press Y) 2) No(press N)\n";
			char ch;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				exit(0);
			}
			else if (ch == 'n' || ch == 'N')
			{
				break;
			}
			else
			{
				cout << "Enter a valid input\n";
				goto cde;
			}
		default: cout << "Enter a valid choice\n";
		}
	}
	system("pause");
}