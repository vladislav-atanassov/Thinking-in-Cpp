#include <iostream>

//#define DEFINED_VAR

#ifdef DEFINED_VAR
#define DEFINED_VAR

extern int var; 
// or extern int var = 0; - this will also not compile because there is restriction. 
// You can't initialize a variable without allocating memory for it (else said defining it)

int func() { var = 10; return var; };

// The program will not compile because there 
// is no "physical" address where 'var' is stored
int main()
{
    std::cout << func() << std::endl;

    return 0;
}

#endif

#ifndef DEFINED_VAR
#define DEFINED_VAR

#include "understadingExternKeyword.h"

// "Promise" the compiler that variable exists somewhere or will be defined in the future
extern int var;

// In the function call the definition of 'var' will be found 
// in the externalFile.h and will be initialized
int func() { var = 7; return var; }

// The pogram will compile successfully
int main()
{
    std::cout << func() << std::endl;

    return 0;
}

#endif