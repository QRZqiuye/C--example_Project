#include <iostream>
using namespace std;

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw "조화평균을 계산할수 없음!";
	}
	return 2.0 * a * b / (a + b);
}

int main(int argc, char* argv[])
{
	double x, y, z;
	cout << "두 개의 수를 입력하시오: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
		}
		catch (const char* s)
		{
			cout << s << "\n다시 시도해보세요.\n";
			continue;
		}
		cout << "조화평균 = " << z << endl;
		cout << "두 개의 수를 입력하시오(Q는 종료): ";
	}
	return 0;
}