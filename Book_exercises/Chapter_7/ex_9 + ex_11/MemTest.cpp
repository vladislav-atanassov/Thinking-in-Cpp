#include <iostream>
#include <cstring>
#include "Mem2.h"

class MyString
{
public:
    MyString() : buf(0) {}
    MyString(const char* str);
    ~MyString() { delete buf; };

    void concat(const char* str);
    void print(std::ostream& os);
    
private:
    Mem *buf;
};

MyString::MyString(const char* str)
{
    buf = new Mem(strlen(str) + 1);
    strcpy((char *)buf->pointer(), str);
}

void MyString::concat(const char* str)
{
    if(!buf)
    {
        buf = new Mem;
    }

    strcat((char *)buf->pointer(buf->msize() + strlen(str) + 1), str);
}

void MyString::print(std::ostream& os)
{

    if(!buf)
    {
        return;
    }

    os << buf->pointer() << std::endl;
}

int main()
{
    MyString s("My test string");
    s.print(std::cout);
    s.concat(" some additional stuff");
    s.print(std::cout);

    MyString s2;
    s2.concat("Using default constructor");
    s2.print(std::cout);
}