#include "classHeader.h"

extern ClassHeader cHeader;

int main()
{
    cHeader.print(); // linker error: undefined reference to `cHeader'

    return 0;
}