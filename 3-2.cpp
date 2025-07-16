#include <iostream>
using namespace std;
double variance(const double arr[], int size);
int main() {
	double a[3] = { 1.1, 2.2, 3.3 };
	double b[5] = { 4.4, 5.5, 6.6, 7.7, 8.8 };
	cout << "Variance of a: " << variance(a, 3) << endl;
	cout << "Variance of b: " << variance(b, 5) << endl;
}

double variance(const double arr[], int size) {
	double sum = 0, sum_sq = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		sum_sq += arr[i] * arr[i];
	}
	return sum_sq / size - sum * sum / (size * size);
}