#ifndef MISTUDENT_H_INCLUDED
#define MISTUDENT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string school;
public:
	Student(const string& n) : school(n) {}
	void printSchool() const {
		cout << school << endl;
	}
};

#endif
