#ifndef VBSTUDENT_H_INCLUDED
#define VBSTUDENT_H_INCLUDED
#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

class Student :virtual public Person {
	string school;
public:
	Student(const string& n, const string& s) : Person(n), school(s) {}
	virtual ~Student() {}
	virtual void print() const override {
		Person::print();
		cout << " from " << school << endl;
	}
};

#endif