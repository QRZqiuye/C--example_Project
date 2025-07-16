#include <iostream>
using namespace std;

float FahrToC(float fahr) {
	return (fahr - 32) * 5 / 9;
}

int main() {
	float fTemp, cTemp;
	cout << "화씨 온도: ";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);
	cout << "섭씨 온도: " << cTemp << endl;
	return 0;
}