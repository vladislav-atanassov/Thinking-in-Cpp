#include <iostream>

void printHello(void)
{
    std::cout << "Hello!" << std::endl;
}

void printHello(std::string name)
{
    std::cout << "Hello, " << name << '!' << std::endl;
}

std::pair<std::string, std::string> printHello(std::string name1, std::string name2)
{
    return {name1, name2};
}

// You can extract the assembly file with the terminal command
// gcc -S your_file_name.cpp (for C++ files; .c if the program is in C)

int main()
{                                   // Actual names of the functions in the assembly file:
    printHello();                   // _Z10printHellov 
    printHello("Tosho");            // _Z10printHelloNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    printHello("Tosho", "Gosho");   // _Z10printHelloNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_

    return 0;
}