#include "Complex2.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, const Complex2& c) {
	os << "(" << c.real();
	if (c.imag() >= 0) {
		os << " + " << c.imag() << "i)";
	} else {
		os << " - " << -c.imag() << "i)";
	}
	return os;
}