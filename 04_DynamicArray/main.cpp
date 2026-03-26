#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main()
{
	clsDynamicArray<int> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);

	cout << "\nPrint Dynamic Array:\n";
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << endl;

	cout << "\nInsert Item 500 in Index 2:\n";
	MyDynamicArray.InsertAt(2, 500);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\n\nInsert Item 900 At Begining:\n";
	MyDynamicArray.InsertAtBegining(900);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\n\nInsert Item 700 Before index 2:\n";
	MyDynamicArray.InsertBefore(2, 700);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\n\nInsert Item 600 After index 2:\n";
	MyDynamicArray.InsertAfter(2, 600);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\n\nInsert Item 300 At End:\n";
	MyDynamicArray.InsertAtEnd(300);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\n\nFind 30 in Array:";
	int Index = MyDynamicArray.Find(30);

	if (Index != -1)
		cout << "\n30 Found at index: " << Index << endl;
	else
		cout << "\nVakue NOT Found.\n";



	cout << "\nDeleteItem(2):\n";
	MyDynamicArray.DeleteItemAt(2);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\nDelete First Item:\n";
	MyDynamicArray.DeleteFirstItem();
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\nDelete Last Item:\n";
	MyDynamicArray.DeleteLastItem();
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\n\nArray Items after reverse:\n";
	MyDynamicArray.Reverse();
	MyDynamicArray.PrintList();
	
	cout << "\n\nArray Items after resize from 5 to 10 :\n";
	MyDynamicArray.ReSize(10);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\nArray Items after resize from 10 to 5 :\n";
	MyDynamicArray.ReSize(5);
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\nClear Array:\n";
	MyDynamicArray.Clear();
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;


	system("pause>0");
	return 0;
}