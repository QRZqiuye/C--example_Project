#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
	MyString str1("MyString class");
	MyString str2("Object Oriented");
	MyString str3;

	cout << str1 << endl;
	str3 = "Programming";
	cout << str3 << "의 문자열 길이는 ";
	cout << str3.length() << endl;
	str1 = str2;
	cout << str1 << endl;
	str1 = str2 + str3;
	cout << str1 << endl;
	MyString str4(str3);
	cout << str4 << endl;
	str2 += "Programming";
	cout << str2 << endl;
	str2[6] = '-';
	cout << str2 << endl;
	return 0;
}