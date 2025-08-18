#include <iostream>
#include "CBParttime.h"
using namespace std;

int main() {
	Parttime chulsoo("Chulsoo", "Samsung", "Seoul University");
	chulsoo.Student::print();
	chulsoo.Employee::print();

	return 0;
}