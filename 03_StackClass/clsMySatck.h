#pragma once
#include "clsDbLinkedList.h"

template <class T>
class clsMySatck
{
	clsDbLinkedList <T> _MySatck;
	T _Top = NULL;
	T _Bottom = NULL;
	int _Size = 0;
public:

	void Push(T Value)
	{
		if (_MySatck.IsEmpty())
			_Bottom = Value;

		_MySatck.InsertAtBeginnig(Value);
		
		_Top = Value;

		++_Size;
	}

	void Pop()
	{
		if (_MySatck.IsEmpty()) return;

		_MySatck.DeleteFirstNode();
		_Top = _MySatck.head->value;

		--_Size;
	}

	T Top()
	{
		return _Top;
	}

	T Bottom()
	{
		return _Bottom;
	}

	int Size()
	{
		return _Size;
	}

	void Print()
	{
		_MySatck.PrintList();
	}

	bool IsEmpty()
	{
		return _MySatck.IsEmpty();
	}

	T GetItem(int Index)
	{
		return _MySatck.GetItem(Index);
	}

	void Reverse()
	{
		_MySatck.Reverse();
	}

	bool UpdateItem(int Index, T NewValue)
	{
		return _MySatck.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T Value)
	{
		_MySatck.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MySatck.InsertAtBeginnig(Value);
	}

	void InsertAtBack(T Value)
	{
		_MySatck.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MySatck.Clear();
	}
};

