#ifndef INTARRAY1_H_INCLUDED
#define INTARRAY1_H_INCLUDED
#include <iostream>
#include <exception>
using namespace std;

const int DefaultSize = 10;

class Array {
protected:
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

    class BadIndex : public std::exception {
    protected:
        int index;
    public:
        BadIndex(int n) : index(n) {}
        int getIndex() const { return index; }
        virtual const char* what() const noexcept override {
            return "잘못된 인덱스 접근!";
        }
    };
};

#endif

