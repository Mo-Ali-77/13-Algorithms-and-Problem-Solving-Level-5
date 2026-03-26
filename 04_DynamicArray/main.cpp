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

	cout << "\nPrint Dynamic Array:\n";
	MyDynamicArray.PrintList();
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;

	cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << endl;

	cout << "\nArray Items after reverse:\n";
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