#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* _OrignalArray;
	T* _TempArray;

public:

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			_Size = 0;

		_Size = Size;

		_OrignalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] _OrignalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size || _Size < 0)
			return false;

		_OrignalArray[Index] = Value;
		return true;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0);
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; ++i)
		{
			cout << _OrignalArray[i] << " ";
		}
	}

	void ReSize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (_Size > NewSize)
			_Size = NewSize;
		
		for (int i = 0; i < _Size; ++i)
		{
			_TempArray[i] = _OrignalArray[i];
		}

		_Size = NewSize;
		delete[] _OrignalArray;
		_OrignalArray = _TempArray;
	}

	T GetItem(int Index)
	{
		if ((Index >= _Size) || (Index < 0) || (_Size == 0))
			return NULL;

		return _OrignalArray[Index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];

		int counter = 0;
		for (int i = _Size-1; i >= 0; --i)
		{
			_TempArray[counter] = _OrignalArray[i];
			++counter;
		}

		delete[] _OrignalArray;

		_OrignalArray = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[_Size];
		delete[] _OrignalArray;
		_OrignalArray = _TempArray;
	}

	bool DeleteItemAt(int Index)
	{
		if ((Index >= _Size) || (Index < 0) || (_Size == 0))
			return false;

		--_Size;
		_TempArray = new T[_Size];

		int counter = 0;

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = _OrignalArray[i];
		}

		for (int i = Index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = _OrignalArray[i];
		}


		delete[] _OrignalArray;
		_OrignalArray = _TempArray;
		return true;
	}

	bool DeleteFirstItem()
	{
		return DeleteItemAt(0);
	}

	bool DeleteLastItem()
	{
		return DeleteItemAt(_Size - 1);
	}

	int Find(T Value)
	{
		for (int i = 0; i < _Size; ++i)
		{
			if (_OrignalArray[i] == Value)
				return i;
		}

		return -1;
	}

	bool DeleteItem(T Value)
	{
		int Index = Find(Value);
		if (Index == -1)
			return false;

		return DeleteItemAt(Index);
	}

	bool InsertAt(int Index, T Value)
	{
		if ((Index > _Size) || (Index < 0))
			return false;

		++_Size;
		_TempArray = new T[_Size];

		for (int i = 0; i < Index; ++i)
		{
			_TempArray[i] = _OrignalArray[i];
		}

		_TempArray[Index] = Value;

		for (int i = Index; i < _Size - 1; ++i)
		{
			_TempArray[i + 1] = _OrignalArray[i];
		}

		delete[] _OrignalArray;
		_OrignalArray = _TempArray;
		return true;
	}

	bool InsertAtBegining(T Value)
	{
		return InsertAt(0, Value);
	}

	bool InsertBefore(int Index, T value)
	{
		if (Index < 1)
			return InsertAt(0, value);
		else
			return InsertAt(Index - 1, value);
	}

	bool InsertAfter(int Index, T Value)
	{
		if (Index >= _Size)
			return InsertAt(_Size - 1, Value);
		else
			return InsertAt(Index + 1, Value);
	}

	bool InsertAtEnd(T Value)
	{
		return InsertAt(_Size, Value);
	}
};

