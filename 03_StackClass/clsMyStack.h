#pragma once
#include "clsMyQueue.h"

template <class T>
class clsMyStack : public clsMyQueue <T>
{
public:

	void Push(T Value)
	{
		if (clsMyQueue<T>::_LastItem == NULL)
			clsMyQueue<T>::_LastItem = Value;

		clsMyQueue<T>::_MyArray.InsertAtBeginnig(Value);
	}

	T Top()
	{
		return clsMyQueue<T>::front();
	}

	T Bottom()
	{
		return clsMyQueue<T>::back();
	}
};

