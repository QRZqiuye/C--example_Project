#include <iostream>
using namespace std;
int main() {
	int max;
	int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	max = data[0];
	cout << "The data is: " << data[0];
	for (int i = 1; i < 10; i++) {
		cout << ", " << data[i];
		if (data[i] > max) {
			max = data[i];
		}
	}
	cout << "\n\nThe maximum value is: " << max << endl;
	return 0;
}