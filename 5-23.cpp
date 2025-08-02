#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[40] = "C style string";
	char str2[] = "Object - Oriented ";
	const char* str3 = "Programming";

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << "의 길이는 " << strlen(str3) << endl;
	strcpy_s(str1, sizeof(str1), str2);
	cout << "str1: " << str1 << endl;
	strcat_s(str1, sizeof(str1), str3);
	cout << "str1: " << str1 << endl;
}