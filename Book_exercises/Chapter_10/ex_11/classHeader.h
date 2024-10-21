#ifndef CLASSHEADER_H
#define CLASSHEADER_H

#include <iostream>

class ClassHeader
{
private:
    int a;

public:
    ClassHeader(int param) : a(param) {}
    ~ClassHeader() {}

    void print() { std::cout << a << std::endl; }
};

#endif // CLASSHEADER_H