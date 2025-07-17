#include <iostream>
using namespace std;

struct SalesRec {
	char pID[10];
	int dYear, dMonth, dDay;
	char deliverAddr[40];
};

void PrSalesRec(const SalesRec& srec);

int main() {
	SalesRec s = { "A12345", 2023, 10, 15, "서울시 종로구 대학로80" };
	PrSalesRec(s);
	return 0;
}

void PrSalesRec(const SalesRec& srec) {
	cout << "상품 ID: " << srec.pID << endl;
	cout << "구매일: " << srec.dYear << "-" << srec.dMonth << "-" << srec.dDay << endl;
	cout << "배송지: " << srec.deliverAddr << endl;
}