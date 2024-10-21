#include <iostream>

#define DEFINED_VAR

#ifdef DEFINED_VAR
#define DEFINED_VAR

void func() { std::cout << "DEFINED_VAR is  defined"; };

#endif

#ifndef DEFINED_VAR
#define DEFINED_VAR

void func() { std::cout << "DEFINED_VAR is not defined"; };

#endif

int main()
{
    func();

    return 0;
}
