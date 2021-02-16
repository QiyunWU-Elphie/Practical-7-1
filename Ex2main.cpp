#include <iostream>
#include "Stack.hpp"

int main()
{
	Stack<int> s = Stack<int>(5);
	s.print();
	s.push(3);
	s.push(6);
	s.push(1);
	s.push(8);
	s.push(2);
	s.push(9);
	s.print();
	s.pop();
	s.print();
	s.push(9);
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	return 0;
}