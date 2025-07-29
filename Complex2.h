#ifndef COMPLEX2_H_INCLUDED
#define COMPLEX2_H_INCLUDED
#include <ostream>
using namespace std;

class Complex2 {
	double rPart, iPart;
public:
	Complex2(double r = 0.0, double i = 0.0) : rPart(r), iPart(i) {}
	double real() const {
		return rPart;
	}
	double imag() const {
		return iPart;
	}
	Complex2 conj() const {
		return Complex2(rPart, -iPart);
	}
	Complex2 operator+(const Complex2& c) const {
		return Complex2(rPart + c.rPart, iPart + c.iPart);
	}
	Complex2 operator+(const double d) const {
		return Complex2(rPart + d, iPart);
	}
	Complex2 operator+=(const Complex2& c) {
		rPart += c.rPart;
		iPart += c.iPart;
		return *this;
	}
	bool operator==(const Complex2& c) const {
		return (rPart == c.rPart && iPart == c.iPart);
	}
};

Complex2 operator+(double r, const Complex2& c) {
	return Complex2(r + c.real(), c.imag());
}

#endif