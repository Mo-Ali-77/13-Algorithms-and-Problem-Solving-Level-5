#include <iostream>
#include "clsMySatck.h"

using namespace std;



int main()
{
	clsMySatck<int> Mystack;

	Mystack.Push(10);
	Mystack.Push(20);
	Mystack.Push(30);
	Mystack.Push(40);

	cout << "\nPrint Stack:\n";
	Mystack.Print();

	cout << "\nTop: " << Mystack.Top();
	cout << "\nBottom: " << Mystack.Bottom();
	cout << "\nSize: " << Mystack.Size();

	Mystack.Pop();
	cout << "\n\nPrint Stack include one time pop():\n";
	Mystack.Print();

	cout << "\nTop: " << Mystack.Top();
	cout << "\nBottom: " << Mystack.Bottom();
	cout << "\nSize: " << Mystack.Size() << "\n";

	cout << "\nGet Item By Index 2: " << Mystack.GetItem(2);

	cout << "\nReverse Stack:\n";
	Mystack.Reverse();
	Mystack.Print();

	cout << "\nUpdate Item By Index 2:\n";
	Mystack.UpdateItem(2, 500);
	Mystack.Print();

	cout << "\nInsert After Index 2:\n";
	Mystack.InsertAfter(2, 900);
	Mystack.Print();

	cout << "\nInsert At Front:\n";
	Mystack.InsertAtFront(700);
	Mystack.Print();

	cout << "\nInsert At Back:\n";
	Mystack.InsertAtBack(600);
	Mystack.Print();

	cout << "\nClear Stack:\n";
	Mystack.Clear();
	Mystack.Print();

	system("pause>0");
	return 0;
}