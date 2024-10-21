#include <iostream>
#include "header.h"

int main()
{
    std::cout << "Addresses in cpp1 - &a: " << &a << ", &c: " << &c << std::endl;

    func();

    return 0;
}
    
// The end result of the example is that for the diiferent
// cpp files there is a different place in memory allocated 
// therefore the variables are not clashing because they are not he same to the
// computer eventho they might seem the same to the programer