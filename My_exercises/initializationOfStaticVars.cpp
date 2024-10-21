#include <iostream>

// Beacuse the varaible is static it is requnteed by the compiler 
// to be initialized to 0 as the correct data type
static int c;

int main()
{
    std::cout << c << std::endl;    // Expected 0 always
    
    return 0;
}   