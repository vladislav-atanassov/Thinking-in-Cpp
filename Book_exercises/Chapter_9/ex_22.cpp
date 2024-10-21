#include <iostream>

inline int f_7(void) { return 7; }

int main()
{
    int a = f_7();

    std::cout << a << std::endl;
}