#pragma once
#include "clsMyQueue.h"

template <class T>
class clsMySatck : public clsMyQueue <T>
{
public:

	void Push(T Value)
	{
		clsMyQueue<T>::_MyList.InsertAtBeginnig(Value);
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

