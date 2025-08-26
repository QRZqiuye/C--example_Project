#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
	srand((unsigned)time(NULL));

	vector<int> iv1(5);
	cout << "백터1 : ";
	for (auto& e : iv1) {
		e = rand() % 100 + 1;
		cout << e << " ";
	}

	sort(iv1.begin(), iv1.end());
	cout << endl << "정렬 후 백터1 : ";
	for (auto e : iv1) {
		cout << e << " ";
	}
	cout << endl << endl;

	vector<int> iv2(5);
	cout << "백터2 : ";
	for (auto& e : iv2) {
		e = rand() % 100 + 1;
		cout << e << " ";
	}
	sort(iv2.begin(), iv2.end());
	cout << endl << "정렬 후 백터2 : ";
	for (auto e : iv2) {
		cout << e << " ";
	}
	cout << endl << endl;

	vector<int> iv3(iv1.size() + iv2.size());
	merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());
	cout << "백터1과 백터2를 병합한 백터3 : ";
	for (auto e : iv3) {
		cout << e << " ";
	}
	cout << endl;
	return 0;
}