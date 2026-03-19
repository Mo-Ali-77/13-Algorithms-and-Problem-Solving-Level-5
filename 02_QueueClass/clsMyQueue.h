#pragma once
#include "clsDbLinkedList.h"

template <class T>
class clsMyQueue
{

protected:
	clsDbLinkedList <T> _MyList;
	T _LastItem = NULL;

public:
	
	void push(T Value)
	{
		_MyList.InsertAtEnd(Value);
		_LastItem = Value;
	}

	void pop()
	{
		_MyList.DeleteFirstNode();

		if (_MyList.IsEmpty())
			_LastItem = NULL;
	}

	void print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.head->value;
	}

	T back()
	{
		return _LastItem;
	}
};

