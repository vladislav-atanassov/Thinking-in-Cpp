#include <iostream>

class X
{
public:
    X() {}
    X(int int_X);

    void f()
    {
        std::cout << "I am X." << std::endl;
    }
};

class Y : public X
{
public:
    Y() {}
    Y(int int_Y);
};

class Z : public X
{
public:
    Z() {}
    Z(int int_Z);
};

class A : public Y, public Z
{   
public:
    A() {}
};

int main()
{
    A a;
//! a.f();      "A::f" is ambiguousC/C++(266)   
    a.Y::f();
    a.Z::f();
    return 0;
}

// Clasic example of the diamand problem using MI