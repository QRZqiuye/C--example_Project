#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++() {
	if (++np >= 12) {
		++dozens, np = 0;
	}
	return *this;
}

Pencils Pencils::operator++(int) {
	Pencils temp = *this;
	if(++np >= 12) {
		++dozens, np = 0;
	}
	return temp;
}

void Pencils::display() const {
	if (dozens) {
		cout << dozens << " dozen(s) and ";
		if (np) {
			cout << np << " pencil(s)" << endl;
		}
	}
	else {
		cout << np << " pencil(s)" << endl;
	}
}