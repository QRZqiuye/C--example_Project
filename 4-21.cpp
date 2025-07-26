#include <iostream>
#include "CharStack.h"
using namespace std;

int main() {
	CharStack chStack;
	char str[20];
	
	cout << "영어 단어를 입력하세요: ";
	cin >> str;

	char* pt = str;
	while (*pt) {
		chStack.push(*(pt++));
	}
	cout << "입력한 단어를 거꾸로 출력합니다: ";
	while (!chStack.chkEmpty()) {
		cout << chStack.pop();
	}
	cout << endl;
	return 0;
}