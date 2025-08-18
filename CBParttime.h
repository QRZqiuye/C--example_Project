#ifndef CBPATRTIME_H_INCLUDED
#define CBPATRTIME_H_INCLUDED
#include "CBEmployee.h"
#include "CBStudent.h"

class Parttime : public Employee, public Student {
public:
	Parttime(const string& n, const string& c, const string& s) 
		: Employee(n, c), Student(n, s) {}
};

#endif