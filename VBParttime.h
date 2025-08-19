#ifndef VBPARTTIME_H_INCLUDED
#define VBPARTTIME_H_INCLUDED
#include <iostream>
#include <string>
#include "VBEmployee.h"
#include "VBStudent.h"
using namespace std;

class PartTime : public Employee, public Student {
public:
	PartTime(const string& n, const string& s, const string& c)
		: Person(n), Employee(n, c), Student(n, s) {}
	virtual ~PartTime() {}
	virtual void print() const override {
		Student::print();
		Employee::print();
	}
};

#endif
