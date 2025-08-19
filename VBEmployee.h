#ifndef VBEMPLOYEE_H_INCLUDED
#define VBEMPLOYEE_H_INCLUDED
#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

class Employee : virtual public Person {
	string company;
public:
	Employee(const string& n, const string& c) : Person(n), company(c) {}
	virtual ~Employee() {}
	virtual void print() const override {
		Person::print();
		cout << " working at " << company << endl;
	}
};

#endif
