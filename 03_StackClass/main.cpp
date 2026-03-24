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
	Mystack.print();

	cout << "\nTop: " << Mystack.Top();
	cout << "\nBottom: " << Mystack.Bottom();
	cout << "\nSize: " << Mystack.Size();

	Mystack.pop();
	cout << "\n\nPrint Stack include one time pop():\n";
	Mystack.print();

	cout << "\nTop: " << Mystack.Top();
	cout << "\nBottom: " << Mystack.Bottom();
	cout << "\nSize: " << Mystack.Size() << "\n";

	cout << "\nGet Item By Index 2: " << Mystack.GetItem(2);

	cout << "\nReverse Stack:\n";
	Mystack.Reverse();
	Mystack.print();

	cout << "\nUpdate Item By Index 2:\n";
	Mystack.UpdateItem(2, 500);
	Mystack.print();

	cout << "\nInsert After Index 2:\n";
	Mystack.InsertAfter(2, 900);
	Mystack.print();

	cout << "\nInsert At Front:\n";
	Mystack.InsertAtFront(700);
	Mystack.print();

	cout << "\nInsert At Back:\n";
	Mystack.InsertAtBack(600);
	Mystack.print();

	cout << "\nClear Stack:\n";
	Mystack.Clear();
	Mystack.print();

	system("pause>0");
	return 0;
}