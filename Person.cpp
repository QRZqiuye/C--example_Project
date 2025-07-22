#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr) {
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);
	cout << "Person constructor called for " << this->name << endl;
}

Person::~Person() {
	cout << "Person destructor called for " << this->name << endl;
	delete[] name;
	delete[] addr;
}

void Person::print() const {
	cout << "Name: " << name << ", Address: " << addr << endl;
}

void Person::changeAddr(const char* newAddr) {
	delete[] addr; // Free the old address
	addr = new char[strlen(newAddr) + 1]; // Allocate new memory
	strcpy_s(addr, strlen(newAddr) + 1, newAddr); // Copy the new address
	cout << "Address changed to: " << addr << endl;
}