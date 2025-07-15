#include <iostream>
using namespace std;
int main() {
	char str[14] = "Hello, World!";
	char* pt;
	cout << str << endl;
	pt = str; // pt가 str을 가리키도록 함
	while (*pt) {
		if (*pt >= 'a' && *pt <= 'z') {
			*pt = *pt - 'a' + 'A'; // 소문자를 대문자로 변환	
		}
		pt++;
	}
	cout << str << endl; // 변환된 문자열 출력
	return 0;
}