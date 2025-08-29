#ifndef INTARRAY2_H_INCLUDED
#define INTARRAY2_H_INCLUDED
#include "IntArray1.h"

class gArray : public Array {
	int base;
public:
	gArray(int b, int s) : Array(s), base(b) {}
	int& operator[](int offset);
	int operator[](int offset) const;
	int getbase() const { return base; }
	friend ostream& operator<<(ostream&, gArray&);

	class LowIndex : public Array::BadIndex {
	public:
		int wrongIndex;
		int lowBound;
		LowIndex(int w, int l) : BadIndex(w), wrongIndex(w), lowBound(l) {}
		const char* what() const noexcept override {
			return "인덱스가 하한보다 작습니다!";
		}
	};

	class HighIndex : public Array::BadIndex {
	public:
		int wrongIndex;
		int highBound;
		HighIndex(int w, int h) : BadIndex(w), wrongIndex(w), highBound(h) {}
		const char* what() const noexcept override {
			return "인덱스가 상한보다 큽니다!";
		}
	};
};

#endif