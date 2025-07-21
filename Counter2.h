#ifndef COUNTER2_H_INCLUDED
#define COUNTER2_H_INCLUDED

class Counter {
	int value;
public:
	Counter() :value{ 0 } {}
	void reset() {
		value = 0;
	}
	void count() {
		++value;
	}
	int getValue() const {
		return value;
	}
};

#endif // COUNTER2_H_INCLUDED
