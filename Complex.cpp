#include <iostream>
#include "Complex.h"
using namespace std;

Complex Complex::mul(const Complex& c) const {
	return Complex(rPart * c.rPart - iPart * c.iPart, rPart * c.iPart + iPart * c.rPart);
}

Complex Complex::div(const Complex& c) const {
	double denominator = c.rPart * c.rPart + c.iPart * c.iPart;
	if (denominator == 0) {
		throw std::runtime_error("Division by zero in complex division");
	}
	return Complex((rPart * c.rPart + iPart * c.iPart) / denominator,
				   (iPart * c.rPart - rPart * c.iPart) / denominator);
}

void Complex::display() const {
	cout << "(" << rPart;
	if (iPart >= 0) {
		cout << " + " << iPart << "i";
	} else {
		cout << " - " << -iPart << "i";
	}
	cout << ")";
}