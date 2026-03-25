#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;

public:

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			_Size = 0;
		_Size = Size;

		_TempArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] _TempArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size || _Size < 0)
			return false;

		_TempArray[Index] = Value;
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
			cout << _TempArray[i] << " ";
		}
	}
};

