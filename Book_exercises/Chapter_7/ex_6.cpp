#include <iostream>

// This will cause a compilation error 
// because 'b' is not declared and it doesn't know that to use for it
//! void printNums(int a, int)
void printNums(int a, int b)
{
    std::cout << a << ", " << b << std::endl;
}

// In this case the second argument is not used so there is no problem 
std::pair<int, int> getNums(int a, int)
{
    return {a, NULL};
}

int main()
{
    printNums(1, 4);

    // Function call still requares all of the arguments
    getNums(1, 4);
}