#ifndef CBEMPLOYEE_H_INCLUDED
#define CBEMPLOYEE_H_INCLUDED
#include "CBPerson.h"
#include <iostream>
#include <string>
using namespace std;
class Employee : public Person {
	string company;
public:
	Employee(const string& n, const string& c) : Person(n), company(c) {}
	void print() const {
		Person::print();
		cout << " works at " << company << endl;
	}
};
#endif
