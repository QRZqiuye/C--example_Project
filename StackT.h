#ifndef STACKT_H_INCLUDED
#define STACKT_H_INCLUDED
#include <iostream>
#include <utility>
using namespace std;

template <class T>
class Stack {
	T* buf;
	int top;
	int size;
public:
	Stack(int s);
	virtual ~Stack();
	bool full() const;
	bool empty() const;
	void push(const T& a);
	void push(T&& a);
	T&& pop();
};

template <class T>
Stack<T>::Stack(int s) : size(s), top(s) 
{
	buf = new T[size];
}

template <class T>
Stack<T>::~Stack() 
{
	delete[] buf;
}

template <class T>
bool Stack<T>::full() const 
{
	return !top;
}

template <class T>
bool Stack<T>::empty() const 
{
	return top == size;
}

template <class T>
void Stack<T>::push(const T& a) 
{
	if (full()) {
		cerr << "Stack is full!" << endl;
		return 0;
	}
	buf[--top] = a;
}

template <class T>
void Stack<T>::push(T&& a) 
{
	if (full()) {
		cerr << "Stack is full!" << endl;
		return;
	}
	buf[--top] = move(a);
}

template <class T>
T&& Stack<T>::pop() 
{
	if (empty()) {
		cerr << "Stack is empty!" << endl;
		return T();
	}
	return move(buf[top++]);
}

#endif
