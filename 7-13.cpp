#include <iostream>
#include <string>
#include <map>
using namespace std;

template <typename T>
class LESS_T {
	public:
	bool operator()(const T& a, const T& b) const {
		return a < b;
	}
};

int main()
{
	map<string, string, LESS_T<string>> pBook{
		{"한정훈", "010-1234-5678"},
		{"김철수", "010-2345-6789"},
		{"이영희", "010-3456-7890"}
	};

	pBook["박영수"] = "010-4567-8901";

	pBook.insert(make_pair("최민수", "010-5678-9012"));
	pBook.insert(make_pair("정우성", "010-6789-0123"));

	for(auto pb = pBook.begin(); pb != pBook.end(); ++pb) {
		cout << pb->first << " " << pb->second << endl;
	}
	cout << pBook.size() << "명이 저장되어 있습니다." << endl;

	string str;
	cout << endl << "찾을 이름: ";
	cin >> str;
	auto result = pBook.find(str);
	if (result != pBook.end()) {
		cout << result->first << "님의 전화번호는 ";
		cout << result->second << "입니다." << endl;
	}
	else {
		cout << str << "님은 전화번호부에 없습니다." << endl;
	}
	return 0;
}