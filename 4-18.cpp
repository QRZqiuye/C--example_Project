#include <iostream>
#include "NamedObj.h"
using namespace std;

void f() {
	NamedObj x("Third");
	x.dispaly();
}

int main() {
	cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
	NamedObj a("First");
	NamedObj b("Second");
	a.dispaly();
	b.dispaly();
	f();
	NamedObj c("Fourth");
	c.dispaly();
	cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
	return 0;
}