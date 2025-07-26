#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) {
	if(chkFull()) {
		cout << "스택이 가득 찼습니다." << endl;
		return false;
	}
	buf[--top] = ch;
	return true;
}

char CharStack::pop() {
	if(chkEmpty()) {
		cout << "스택이 비어 있습니다." << endl;
		return 0;
	}
	return buf[top++];
}