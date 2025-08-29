#include <iostream>
#include <algorithm>  
#include "IntArray1.h"
using namespace std;

Array::Array(int s) : size(s)
{
    buf = new int[s];
    std::fill(buf, buf + s, 0);  
}

Array::Array(const Array& other) : size(other.size)
{
    buf = new int[size];
    std::copy(other.buf, other.buf + size, buf);
}

Array& Array::operator=(const Array& other)
{
    if (this != &other) {
        delete[] buf;  
        size = other.size;
        buf = new int[size];
        std::copy(other.buf, other.buf + size, buf);
    }
    return *this;
}

Array::~Array()
{
    delete[] buf;
}

int& Array::operator[](int offset)
{
    if (offset < 0 || offset >= size) {
        throw BadIndex();
    }
    return buf[offset];
}

const int& Array::operator[](int offset) const
{
    if (offset < 0 || offset >= size) {
        throw BadIndex();
    }
    return buf[offset];
}

ostream& operator<<(ostream& os, const Array& arr)
{
    for (int i = 0; i < arr.getsize(); i++) {
        if (i % 5 == 0) os << endl;
        os << "[" << i << "]=" << arr.buf[i] << " ";
    }
    return os;
}
