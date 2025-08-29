#ifndef INTARRAY1_H_INCLUDED
#define INTARRAY1_H_INCLUDED
#include <iostream>
using namespace std;

const int DefaultSize = 10;

class Array {
    int* buf;
    int size;

public:
    Array(int s = DefaultSize);
    Array(const Array& other);   
    Array& operator=(const Array& other);  
    virtual ~Array();

    int& operator[](int offset);
    const int& operator[](int offset) const;

    int getsize() const { return size; }

    friend ostream& operator<<(ostream&, const Array&);

    class BadIndex {};   
};

#endif

