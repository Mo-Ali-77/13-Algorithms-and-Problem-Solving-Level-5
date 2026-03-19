#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.print();

    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.print();

    cout << "\n\nItem in Index 2: " << MyQueue.GetItem(2);

    cout << "\n\nBefore Reverse Queue:\n";
    MyQueue.print();
    cout << "\n\nAfter Reverse Queue:\n";
    MyQueue.Reverse();
    MyQueue.print();

    cout << "\n\nUpdate Item 2:\n";
    MyQueue.UpdateItem(2, 500);
    MyQueue.print();

	system("pause>0");
	return 0;
}