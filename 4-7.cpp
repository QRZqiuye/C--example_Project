#include <iostream>
#include "CounterM.h"
using namespace std;

int main() {
	CounterM cnt(9);
	cout << "CounterM: " << cnt.getValue() << endl;
	for(int i = 0; i < 12; ++i) {
		cnt.count();
		cout << "CounterM: " << cnt.getValue() << endl;
	}
	return 0;
}