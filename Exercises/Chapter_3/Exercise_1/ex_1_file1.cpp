#include <iostream>
#include "C:\Users\Vladislav Atanassov\Documents\Thinking in C++\Exercises\Chapter_3\Exercise_1\ex_1_header_file.h"

#define PRINT(x) std::cout << #x << std::endl;

void voidFunc(void)
{
    PRINT(void voidFunc(void));
}

int intFunc(int x, int y)
{
    PRINT(int intFunc(int x, int y));

    return x + y;
}

float floatFunc(int x, float y)
{
    PRINT(float floatFunc(int x, float y));

    return static_cast<float>(x) * y;
}

char charFunc(int x)
{
    PRINT(char charFunc(int x));

    return static_cast<char>(x);
}
