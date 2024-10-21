#include "ex_33.h"
#include <iostream>

int main() 
{
    VPTRLookUp obj(701);
    
    unsigned char* ptr = reinterpret_cast<unsigned char*>(&obj);

    std::cout << "vprt address = 0x" << std::hex << *reinterpret_cast<size_t*>(ptr) << std::endl;
    std::cout << "data = " << std::dec << *reinterpret_cast<int*>(ptr + sizeof(size_t)) << std::endl;

    return 0;
}