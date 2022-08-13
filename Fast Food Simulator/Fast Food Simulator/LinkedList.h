#include <iostream>
#ifndef LINKEDLIST
#define LINKEDLIST

using std::cout;
using std::endl;

template<class T>
struct Node
{
	T nodeData;
	Node* Next;
};

template<class T>
class LinkedList
{
private:
	Node<T>* Head;
	Node<T>* Itr;
	int count = 0;
	
public:
	LinkedList();
	void addItem(T data);
	void listItems();
	void next();
	void first();
	double removeItem(int index);
	bool isLast();
	int length();
	T firstItem();
	T currentItem();
};

template <class T>
LinkedList<T>::LinkedList()
{
	this->Head = NULL;
}

template<class T>
void LinkedList<T>::addItem(T data)
{
	if (Head == NULL)
	{
		Head = new Node<T>;
		Head->nodeData = data;
		Head->Next = NULL;

		cout << count << endl;
		count++;

		Itr = Head;
	}
	else
	{
		Node<T>* p = Head;
		while (p->Next != NULL) // If p->Next == NULL, that means this is the end of the list
		{
			p = p->Next;
		}

		Node <T>* n = new Node<T>;
		n->nodeData = data;
		n->Next = NULL;
		p->Next = n;
		count++;
	}
}

template <class T>
void LinkedList<T>::first()
{
	Itr = Head;
}

template <class T>
bool LinkedList<T>::isLast()
{
	if (Itr->Next == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
int LinkedList<T>::length()
{
	int len = 0;
	Node<T>* temp = Head;
	while (temp != NULL)
	{
		len++;
		temp = temp->Next;
	}
	return len;
}

template <class T>
T LinkedList<T>::firstItem()
{
	return Head->nodeData;
}

template <class T>
T LinkedList<T>::currentItem()
{
	return Itr->nodeData;
} 

template <class T>
void LinkedList<T>::next()
{
	Itr = Itr->Next;
}

template <class T>
void LinkedList<T>::listItems()
{
	cout << "Your order contains: " << endl;
	Node<T>* p = Head;

	for (int i = 0; i < count; i++)
	{
		if (p != NULL)
		{
			cout << i + 1 << ". " << (p->nodeData) << endl;
			p = p->Next;
		} 
	}
	
}

template <class T>
double LinkedList<T>::removeItem(int index)
{
	double remPrice = 0;
	if (Head == NULL)
	{
		cout << "Your order currently has no items!" << endl;
		return 0;
	}
	if (index >= length() || index < 0)
	{
		cout << "ERROR: Index is out of bound." << endl;
		return 0;
	}
	if (index == 0)
	{
		remPrice = Head->nodeData.getPrice();
		Head = Head->Next;
		cout << "Item #" << index << " in your order has been removed." << endl;
		cout << "There are now " << this->length() << " items in your order." << endl;
		return remPrice;
	}
	
	int c = 0;
	Node<T>* temp = Head;
	while (temp != NULL)
	{
		if (c == index - 1)
		{
			remPrice = Head->Next->nodeData.getPrice();
			temp->Next = temp->Next->Next;
			cout << "Item #" << index << " in your order has been removed." << endl;
			cout << "There are now " << this->length() << " items in your order." << endl;
			return remPrice;
		}
		c++;
		temp = temp->Next;
	}
}

#endif