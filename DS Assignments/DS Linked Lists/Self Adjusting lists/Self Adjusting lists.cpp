// Self Adjusting lists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


struct node
{
	int data;
	struct node *next;
}*first = NULL, *temp;

struct node* insert(struct node *first, int ele)
{
	struct node *n;
	n = new node;
	n->data = ele;
	n->next = NULL;

	if (first == NULL)
	{
		first = n;
		return first;

	}
	temp = first;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
	return first;
}

void selfAdjust(int n)
{
	node *d;
	temp = first;
	if (first == NULL)
	{
		cout << "The list is empty to adjust\n Please enter the elements first\n";
	}
	else if (first->next == NULL)
	{
		cout << "Done\n";
	}
	else
	{
		int flag = 0;
		while (temp->next != NULL)
		{
			if (temp->next->data == n)
			{
				flag = 1;
				d = temp->next;
				temp->next = temp->next->next;
				d->next = first;
				first = d;
				break;
			}
			else
				temp = temp->next;
		}
		if (flag == 0)
		{
			cout << "Enter a valid element\nElement not found\n";
		}
		else
		{
			cout << "Done\n";
		}
	}
}

void display()
{
	if (first == NULL)
		cout << "The list is empty\n";
	else
	{
		temp = first;
		while (temp != NULL)
		{
			cout << temp->data << "-->";
			temp = temp->next;
		}
		cout << "NULL\n";
	}
}

int main()
{
	//int n;
		//cout << "List is: \n";
		//display();
		int ch;
		while (1)
		{
			cout << "Enter a choice\n1)Insert Element 2)Self Adjust 3)Display 4)Exit\n";
			cin >> ch;
			switch (ch)
			{
			case 1: {
				int ele;
				cout << "Enter the element\n";
				cin >> ele;
				first = insert(first, ele);
				break;
			}
			case 2: {
				cout << "Enter the element to adjust\n";
				int a;
				cin >> a;
				selfAdjust(a);
				break;
			}
			case 3: {
				cout << "\nThe list is: ";
				display();
				break;
			}
			case 4: exit(0);
			}
		}
	system("pause");
    return 0;
}

