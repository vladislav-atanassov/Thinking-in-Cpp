#include <iostream>

class X
{
public:
    X() {}
    X(int int_X);

    void f()
    {
        std::cout << "X" << std::endl;
    }
};

class Y : virtual public X
{
public:
    Y() {}
    Y(int int_Y);

    void f()
    {
        std::cout << "Y" << std::endl;
    }
};

class Z : virtual public X
{
public:
    Z() {}
    Z(int int_Z);
    
    void f()
    {
        std::cout << "Z" << std::endl;
    }
};

class A : public Y, public Z
{   
public:
    A() { X(); }
};

int main()
{
    A a;
    X *px;
    px = &a;    //* No ambiguity due to virtual inheritance

    a.Y::f();
    a.Z::f();

    return 0;
}
