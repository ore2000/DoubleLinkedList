#pragma once
#ifndef DLINKEDLIST
#define DLINKEDLIST

#include "nodeClass.h"
#include<iostream>

using namespace std;

template<class T>

class dLinkedList
{
public:
	node<T>* head;

	dLinkedList()
	{
		head = nullptr;
	}

	void insert(T item)
	{
		node<T>* temp = new node<T>(item);
		if (head != nullptr)
		{
			head->prev = temp;
			temp->next = head;
			head = temp;
		}
		else
		{
			head = temp;
		}
	}

	bool find(T item)
	{
		/*node<T>* temp = head;
		for (temp = head; temp->next != nullptr; temp = temp->next)
		{
			if (temp->data == item) return true;
		}
		if (temp->data == item) return true;

		return false;*/
		return find(item, head);
	}

	bool find(T item, node<T>* root)
	{
		if (root == nullptr) return false;

		if (root->data == item) return true;

		return find(item, root->next);
	}

	void print()
	{
		/*node<T>* temp = head;
		for (temp = head; temp->next != nullptr; temp = temp->next)
		{
			cout << temp->data << "\n";
		}
		cout << temp->data << "\n";*/

		print(head);
	}

	bool print(node<T>* root)
	{
		if (root != nullptr)
		{
			cout << root->data << "\n";
			return print(root->next);
		}
		else
		{
			cout << "Ended at nullptr";
			return true;
		}
	}
};
#endif //DLINKEDLIST
