#include <iostream>
#include "clsDbLinkedList.h"

using namespace std;



int main()
{
	clsDbLinkedList<int> MyDbLinkedList;

	if (MyDbLinkedList.IsEmpty())
		cout << "\n\nYes List is Empty.\n";
	else
		cout << "\n\nNo List is NOT Empty.\n";

	cout << "\nSize of Linked List = " << MyDbLinkedList.Size() << "\n";

	MyDbLinkedList.InsertAtBeginnig(5);
	MyDbLinkedList.InsertAtBeginnig(4);
	MyDbLinkedList.InsertAtBeginnig(3);
	MyDbLinkedList.InsertAtBeginnig(2);
	MyDbLinkedList.InsertAtBeginnig(1);


	cout << "\nPrint DbLinkedList Content:\n";
	MyDbLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N1 = MyDbLinkedList.Find(2);

	if (N1 != NULL)
		cout << "\nNode with value 2 is found :-)\n";
	else
		cout << "\nNode with value 2 is NOT found :-(\n";

	MyDbLinkedList.InsertAfter(N1, 500);
	cout << "\nAfter Inserting 500 after 2:\n";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.InsertAtEnd(700);
	cout << "\nAfter Inserting 700 at end:\n";
	MyDbLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N2 = MyDbLinkedList.Find(4);
	MyDbLinkedList.DeleteNode(N2);
	cout << "\nAfter Delete 4:\n";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.DeleteFirstNode();
	cout << "\nAfter Delete First Node:\n";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.DeleteLastNode();
	cout << "\nAfter Delete Last Node:\n";
	MyDbLinkedList.PrintList();
	
	if (MyDbLinkedList.IsEmpty())
		cout << "\nYes List is Empty.\n";
	else
		cout << "\nNo List is NOT Empty.\n";

	cout << "\nSize of Linked List = " << MyDbLinkedList.Size() << "\n";

	cout << "\nLinked list after reverse:\n";
	MyDbLinkedList.Reverse();
	MyDbLinkedList.PrintList();

	cout << "\nClear Linked List:\n";
	MyDbLinkedList.Clear();

	cout << "\nSize of Linked List = " << MyDbLinkedList.Size();


	MyDbLinkedList.InsertAtBeginnig(5);
	MyDbLinkedList.InsertAtBeginnig(4);
	MyDbLinkedList.InsertAtBeginnig(3);
	MyDbLinkedList.InsertAtBeginnig(2);
	MyDbLinkedList.InsertAtBeginnig(1);

	cout << "\n\nLinked list content:\n";
	MyDbLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N = MyDbLinkedList.GetNode(4);

	cout << "\nNode Value at index 4 is: " << N->value;


	system("pause>0");
	return 0;
}