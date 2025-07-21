#include <iostream>
#include "Counter1.h"
using namespace std;

int main() {
	Counter cnt;
	cout << "Counter value after reset: " << cnt.getValue() << endl;
	cnt.count();
	cnt.count();
	cout << "Counter value after two counts: " << cnt.getValue() << endl;
	return 0;
}