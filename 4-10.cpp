#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person* p1 = new Person("Alice", "123 Main St");
	Person* p2 = new Person("Bob", "456 Elm St");

	p1->print();
	p2->print();

	cout << endl << "Changing address " << endl;
	p1->changeAddr("789 Oak St");
	p1->print();
	p2->changeAddr("101 Pine St");
	p2->print();

	delete p1; // Clean up memory for p1
	delete p2; // Clean up memory for p2
	return 0;
}