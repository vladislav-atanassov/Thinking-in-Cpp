#include <iostream>

class X
{
public:
    X() {}
    X(int int_X);

    virtual void f()
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
    A(int int_A);

    void f() override
    {
        std::cout << "A" << std::endl;
    }
};

int main()
{
    A a;
    X *px;
    px = &a;

    px->f();

    return 0;
}
