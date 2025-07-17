#include <iostream>
using namespace std;

void SwapValues(int& a, int& b);

int main() {
	int a, b;
	cout << "두 수를 입력하시오: ";
	cin >> a >> b;
	if (a < b) {
		SwapValues(a, b);
	}
	cout << "큰수 = " << a << " 작은수 = " << b << endl;
	return 0;
}

void SwapValues(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}