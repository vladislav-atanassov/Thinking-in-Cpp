#include <iostream>
#include <ctime>

int main()
{
    const time_t timeNow = time(0);
    std::cout << timeNow << std::endl;

    // expected compile-time error but the compiler is too smart
    std::cout << timeNow << std::endl;

    return 0;
}
