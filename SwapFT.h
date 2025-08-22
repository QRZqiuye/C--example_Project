#ifndef SWAPFT_FUNCTION_TEMPLATE_H_INCLUDED
#define SWAPFT_FUNCTION_TEMPLATE_H_INCLUDED
#include <utility>
using namespace std;
template <typename T>
void swapFT(T &a, T &b) 
{
	T temp = move(a);
	a = move(b);
	b = move(temp);
}
#endif
