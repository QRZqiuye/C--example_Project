#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	Complex c1(1.0, 2.0);
	Complex c2(3.0, 4.0);
	Complex c3 = c1.add(c2);
	c1.display();
	cout << " + ";
	c2.display();
	cout << " = ";
	c3.display();
	cout << endl;
	
	c3 = c1.mul(10.0);
	c1.display();
	cout << " * 10.0 = ";
	c3.display();
	cout << endl;
	return 0;
}