#include <iostream>

template<class T>
void printBitsInNumber(T& number) // works with whole interger types (not double and float)
{
    // Calculate the number of bits in T:
    // sizeof() return the result in bytes so we 
    // multiply with 8 to get the number if bits and 
    // substract one for the bit responsible for the sign
    constexpr int numBits = ((sizeof(T) * 8) - 1); 
    
    // Do the iteration backwards to get the result as it actually is
    for(int i = numBits, n = 0; i >= 0; i--, n++)
    {
        if(n == 4) // Devide the result into groups of 4 bits
        {
            n = 0;
            std::cout << '_';
        }

        std::cout << ((number >> i) & 1); 
    }  

    std::cout << std::endl;
}

int main()
{
    uint8_t a = 254;
    uint16_t b = 127;
    int c = 6;

    printBitsInNumber(a); // Expected: 1111_1110
    printBitsInNumber(b); // Expected: 0000_0000_0111_1111
    printBitsInNumber(c); // Expected: 0000_0000_0000_0000_0000_0000_0000_0110

    return 0;
}