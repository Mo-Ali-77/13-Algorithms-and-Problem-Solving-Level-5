#pragma once
#include<iostream>
using namespace std;

template <class T> 
class clsDbLinkedList
{

protected:
	int _Size = 0;
	
public:

	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

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
		++_Size;
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
		++_Size;
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

		++_Size;
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
		--_Size;
	}

	void DeleteFirstNode()
	{
		if (head == NULL) return;
		
		Node* Temp = head;
		head = head->next;
		if(head != NULL)
			head->prev = NULL;
		
		delete Temp;
		--_Size;
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

		
		while (Current->next != NULL)
		{
			Current = Current->next;
		}

		Node* Temp = Current;

		Current->prev->next = NULL;

		delete Temp;
		--_Size;
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

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	void Clear()
	{
		while (_Size > 0)
		{
			DeleteFirstNode();
		}
	}

	void Reverse()
	{
		Node* Current = head;
		Node* temp = nullptr;

		while (Current != nullptr)
		{
			temp = Current->prev;
			Current->prev = Current->next;
			Current->next = temp;
			Current = Current->prev;
		}

		if (temp != nullptr)
			head = temp->prev;
	}

};

