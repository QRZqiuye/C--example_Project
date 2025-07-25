#include <cstring>
#include <iostream>
#include "NamedObj.h"
using namespace std;

NamedObj::NamedObj(const char* s) {
	name = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
	id = ++nCount;
}

NamedObj::~NamedObj() {
	++nDestr;
	delete[] name;
}

void NamedObj::dispaly() const {
	cout << "Name: " << name << ", ID: " << id << endl;
}

int NamedObj::nObj() {
	return nCount - nDestr;
}

int NamedObj::nCount = 0;
int NamedObj::nDestr = 0;