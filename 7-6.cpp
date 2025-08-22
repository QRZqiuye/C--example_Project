#include <iostream>
#include "MyString.h"
#include "SwapFT.h"
using namespace std;

int main() {
	int x = 10, y = 20;
	cout << "Before swap: x = " << x << ", y = " << y << endl;
	swapFT(x, y);
	cout << "After swap: x = " << x << ", y = " << y << endl;

	MyString s1("Hello"), s2("World");
	cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << endl;
	swapFT(s1, s2);
	cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;
	return 0;
}