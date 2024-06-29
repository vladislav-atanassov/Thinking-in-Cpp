#include <iostream>

int main() 
{
    /*volatile*/ const int a = 9;

    // C style cast in not a good practice in general 
    // but is used for the purpose of this exercise
    int* p = (int*)&a; 
    *p = 20;

    // The standard C++ way to write to a const variable is using const_cast<>
    volatile int* p2 = const_cast<int*>(&a); // Will not be optimized 
    *p2 = 20;

    // Output may be 'a = 9' due to optimizations for 'a'
    // but if you use 'volatile const int a = 9;'
    // it will output 'a = 20'
    std::cout << "a = " << a << std::endl;
    std::cout << "*p = " << *p << std::endl;    // Output will be 20
    std::cout << "*p2 = " << *p2 << std::endl;  // Output will be 20
    return 0;
}
