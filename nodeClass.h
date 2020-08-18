#pragma once
#ifndef NODE
#define NODE


template<class T>
class node
{
public:
	T data;
	node<T>* next;
	node<T>*prev;

	node()
	{
		next = nullptr;
		prev = nullptr;
	}

	node(T newData)
	{
		data = newData;
		next = nullptr;
		prev = nullptr;
	}

};
#endif // !NODE

