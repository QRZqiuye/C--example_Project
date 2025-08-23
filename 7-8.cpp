#include <iostream>
#include "SortFT.h"
#include "MyString.h"
using namespace std;

int main()
{
	int x[10] = { 5,4,3,2,1,0,8,9,6,7 };
	sortFT(x, 10);
	for (auto i : x)
		cout << x[i] << " ";
	cout << endl;

	MyString s[5] = { "Zorro", "Anna", "John", "Mike", "Bob" };
	sortFT(s, 5);
	for (auto str : s)
		cout << str << " ";
	cout << endl;
	return 0;
}