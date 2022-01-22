#include <iostream>
using namespace std;

//Napišite template klasu Stack.Implementirajte funkcije èlanove za operacije
//push, pop i is_empty.
//Napomena: Odvojite suèelje i implementaciju u razlièite.cpp i.h datoteke.

template <class T>
class Stack {
private:
	T array[10];
	int head = -1; 
public:
	void push(T n);
	T pop();
	bool is_empty();
};

template <class T> void Stack<T>::push(T n)
{
	head = head + 1;
	array[head] = n;
}


template <class T> T Stack<T>::pop()
{
	T array_member = array[head];
	head = head - 1;
	return array_member;
}

template <class T> bool Stack<T>::is_empty()
{
	if (head == -1)
		return 1;
	else
		return 0;
}

