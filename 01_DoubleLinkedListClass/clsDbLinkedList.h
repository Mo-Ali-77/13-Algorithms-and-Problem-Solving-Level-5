#pragma once
#include<iostream>
using namespace std;

template <class T> 
class clsDbLinkedList
{
public:

	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node*head = NULL;

	void InsertAtBeginnig(T Value)
	{
		Node* New_Node = new Node();
		New_Node->value = Value;
		New_Node->next = head;
		New_Node->prev = NULL;
	
		if (head != NULL)
		{
			head->prev = New_Node;
		}
	
		head = New_Node;
	}

	Node* Find(T Value)
	{
		Node* Current = head;
		while (Current != NULL) {
	
			if (Current->value == Value)
				return Current;
	
			Current = Current->next;
		}
	
		return NULL;
	}

	void InsertAfter(Node* Current, T Value)
	{
		Node* New_Node = new Node();
		New_Node->value = Value;
		New_Node->next = Current->next;
		New_Node->prev = Current;
		
		if (Current->next != NULL)
		{
			Current->next->prev = New_Node;
		}
		
		Current->next = New_Node;
	}

	void InsertAtEnd(T Value)
	{
		Node* New_Node = new Node();
		New_Node->value = Value;
		New_Node->next = NULL;
		
		if (head == NULL)
		{
			New_Node->prev = NULL;
	
			head = New_Node;
		}
		else
		{
			Node* Current = head;
	
			while (Current->next != NULL)
			{
				Current = Current->next;
			}
	
			Current->next = New_Node;
			New_Node->prev = Current;
		}
	}

	void DeleteNode(Node*& NodeToDelete)
	{
		if (head == NULL || NodeToDelete == NULL) return;
		
		if (head == NodeToDelete)
		{
			head = NodeToDelete->next;
		}
		
		if (NodeToDelete->next != NULL)
		{
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		
		if (NodeToDelete->prev != NULL)
		{
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		
		delete NodeToDelete;
	}

	void DeleteFirstNode()
	{
		if (head == NULL) return;
		
		Node* Temp = head;
		head = head->next;
		if(head != NULL)
			head->prev = NULL;
		
		delete Temp;
		
	}

	void DeleteLastNode()
	{
		if (head == NULL) return;

		if (head->next == NULL)
		{
			delete head;
			head = NULL;

			return;
		}

		Node* Current = head;

		// My Solution:
		while (Current->next != NULL)
		{
			Current = Current->next;
		}

		Node* Temp = Current;

		Current->prev->next = NULL;

		delete Temp;

		 //Dr.Abu-Hadhoud Solution:
		
		//while (Current->next->next != NULL)
		//{
		//	Current = Current->next;
		//}

		//Node* Temp = Current->next;

		//Current->next = NULL;

		//delete Temp;
	}

	void PrintList()
	{
		Node* Current = head;
		while (Current != NULL)
		{
			cout << Current->value << " ";
			Current = Current->next;
		}

		cout << "\n";
	}
};

