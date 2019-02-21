// Merge sorted LL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


struct node
{
	int data;
	struct node *next;
}*h1 = NULL, *h2 = NULL, *temp;

struct node* insertInList(struct node *first, int ele)
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

void display(struct node *first)
{
	if (first == NULL)
	{
		cout << "Empty List\n";
	}
	else
	{
		temp = first;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL\n";
	}
}

struct node* mergeLists(struct node *h1, struct node *h2)
{
	struct node *p1, *p2;
	p1 = h1;
	p2 = h2;
	if (h1 == NULL)
		return h2;
	if (h2 == NULL)
		return h1;
	if (h1 == NULL && h2 == NULL)
		return NULL;
	else
	{
		if (h1->data < h2->data)
		{
			h1->next = p2;
			h2 = h2->nwxt;
		}
	}
}

int main()
{
	int ln1, ln2;
	int ele;
	cout << "Enter the lenghts of the linked lists\n";
	cin >> ln1 >> ln2;
	cout << "Enter the elements of list-1 in sorted order\n";
	for (int i = 0; i < ln1; i++)
	{
		cin >> ele;
		h1 = insertInList(h1, ele);
	}
	cout << "Enter the elements of list-2 in sorted order\n";
	for (int i = 0; i < ln2; i++)
	{
		cin >> ele;
		h2 = insertInList(h2, ele);
	}
	cout << "\nList-1 is: ";
	display(h1);
	cout << "\nList-2 is: ";
	display(h2);
	h1 = mergeLists(h1, h2);
	cout << "\nList after merging: ";
	display(h1);
	system("pause");
    return 0;
}

