#include <iostream>
#include "MyString.h"
#include "StackT.h"
using namespace std;

int main()
{
	Stack<char> sc(100);
	sc.push('a');
	sc.push('b');
	cout << "CHAR STACK: ";
	while (!sc.empty()) {
		cout << sc.pop() << " ";
	}
	cout << endl;

	Stack<int> si(100);
	si.push(1);
	si.push(2);
	cout << "INT STACK: ";
	while (!si.empty()) {
		cout << si.pop() << " ";
	}
	cout << endl;

	return 0;
}