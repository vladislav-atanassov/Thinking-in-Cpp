#include <iostream>

int a = 0;
void f() {std::cout << "Global f()" << std::endl;}

namespace ab
{
    void f() {std::cout << "Namespace ab f()" << std::endl;}
}

struct S 
{
    int a = 0;
    void f();
};

void S::f() 
{
    ab::f(); // Will call the function in namespace 'ab'
    ::f(); // Would be recursive otherwise! And call the global function
    ::a++; // Select the global a
    a--; // The a at struct scope
}

int main() 
{ 
    S s;
    
    std::cout << a << std::endl;
    std::cout << s.a << std::endl;
    s.f(); 
    std::cout << a << std::endl;
    std::cout << s.a << std::endl;
}