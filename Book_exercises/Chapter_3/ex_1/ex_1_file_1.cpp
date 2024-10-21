#include <iostream>
#include "ex_1_header.h"

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
