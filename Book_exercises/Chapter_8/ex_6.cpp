#include <iostream>

int main()
{
    const char arr[6] = {"Hello"};

    // ex_6.cpp:7:12: error: assignment of read-only location 'arr[2]'
    arr[2] = 'A';

    std::cout << arr[2] << std::endl;

    return 0;
}
