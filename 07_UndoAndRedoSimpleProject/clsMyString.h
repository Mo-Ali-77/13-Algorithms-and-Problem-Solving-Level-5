#pragma once
#include <iostream>
#include "clsMyStackArr.h"
using namespace std;

class clsMyString
{
protected:
	string _Value;
	clsMyStackArr <string> _StackUndo;
	clsMyStackArr <string> _StackRedo;
public:

	void SetValue(string Value)
	{
		_StackUndo.push(_Value);
		_Value = Value;
	}

	string GetValue()
	{
		return _Value;
	}
	__declspec(property(get= GetValue, put= SetValue)) string Value;

	void Undo()
	{
		if (!_StackUndo.IsEmpty())
		{
			_StackRedo.push(_Value);
			_Value = _StackUndo.Top();
			_StackUndo.pop();
		}
	}


	void Redo()
	{
		if (!_StackRedo.IsEmpty())
		{
			_StackUndo.push(_Value);
			_Value = _StackRedo.Top();
			_StackRedo.pop();
		}
	}
};

