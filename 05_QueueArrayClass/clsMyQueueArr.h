#pragma once
#include "clsDynamicArray.h"

template <class T>
class clsMyQueueArr
{

protected:
	clsDynamicArray <T> _MyArray;
	T _LastItem = NULL;

public:

	void push(T Value)
	{
		_MyArray.InsertAtEnd(Value);
		_LastItem = Value;
	}

	void pop()
	{
		_MyArray.DeleteFirstItem();

		if (_MyArray.IsEmpty())
			_LastItem = NULL;
	}

	void print()
	{
		_MyArray.PrintList();
	}

	int Size()
	{
		return _MyArray.Size();
	}

	bool IsEmpty()
	{
		return _MyArray.IsEmpty();
	}

	T front()
	{
		return _MyArray.GetItem(0);
	}

	T back()
	{
		return _LastItem;
	}

	T GetItem(int Index)
	{
		return _MyArray.GetItem(Index);
	}

	void Reverse()
	{
		_MyArray.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyArray.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T Value)
	{
		_MyArray.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyArray.InsertAtBegining(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyArray.InsertAtEnd(Value);
		_LastItem = Value;
	}

	void Clear()
	{
		_MyArray.Clear();
	}

};

