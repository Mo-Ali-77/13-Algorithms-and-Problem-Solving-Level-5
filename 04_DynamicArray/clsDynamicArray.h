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

	void ReSize(int Size)
	{
		if (Size < 0)
			Size = 0;

		_TempArray = new T[Size];

		if (_Size > Size)
			_Size = Size;
		
		for (int i = 0; i < _Size; ++i)
		{
			_TempArray[i] = _OrignalArray[i];
		}

		_Size = Size;
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

		for (int i = 0; i < _Size; ++i)
		{
			if (i != Index)
			{
				_TempArray[counter] = _OrignalArray[i];
				++counter;
			}
		}

		delete[] _OrignalArray;
		_OrignalArray = _TempArray;
		return true;
	}

	bool DeleteFirstItem()
	{
		return DeleteItemAt(0);
	}
};

