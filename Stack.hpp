#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include "StackI.hpp"
using namespace std;
template <typename T> class Stack : StackI<T>
{
protected:
	int m_topIndex;
	int m_count; 
	int m_size; 
	T* s; 
public:
	Stack()
	{
		if (s != NULL) 
		{
			delete[] s;
		}
		s = new T[20];
		m_topIndex = 0;
		m_count = 0;
		m_size = 20;
	}
	Stack(int n)
	{
		if (s != NULL) 
		{
			delete[] s;
		}
		s = new T[n];
		m_topIndex = 0;
		m_count = 0;
		m_size = n;
	}
	~Stack() 
	{
		if (s != NULL) 
		{
			delete[] s;
		}
	}

	void push(T t)
	{
		if (m_count >= 0 && m_count < m_size)
		{
			s[m_topIndex++] = t;
			m_count++;
		}
	}
	void pop()
	{
		if (m_count > 0) {
			--m_topIndex;
			--m_count;
		}
	}
	
	void print()
	{
		cout << "-----------" << endl;
		if (m_count == 0)
		{
			std::cout << "EMPTY STACK" << endl;
		}
		else {
			for (int i = m_topIndex-1; i >= 0; i--)
			{
				if (i == m_topIndex-1)
					cout << "top-> \t";
				else
					cout << "\t\t";
				cout << s[i] << endl;
			}
		}
		cout << "-----------" << endl << endl;
	}

	T top()
	{
		if (m_count > 0) {
			return s[m_topIndex];
		}
		else
			return s[0];
	}

	bool isEmpty()
	{
		return (m_count == 0) ? true : false;
	}
};
#endif