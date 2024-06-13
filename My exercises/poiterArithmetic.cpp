#include <iostream>

int main() 
{
    int arr[10] = {1,2,3,4,5,6,7,8,9}; 

    int* intPtr = arr; // pointes to the begging of arr

    while(*intPtr != '\0') // until the end of the arr in met (the null termination character '\0')
    {
        std::cout << *intPtr << std::endl;
        // Increment the pointer to the next address 
        // it automatically increments it with 4 bits (compililing on 32 bit architecture)
        // because compiler figures it out that the size of int is 4 bits
        intPtr++; 
    }

    return 0;
}