#include <iostream>
#include "Monitor2.h"

void callingStaticMonitor2()
{
    static Monitor2 statMonitor(new Monitor1());
    std::cout << "callingStaticMonitor2: " << &statMonitor << std::endl;
}

#define GLOBAL_CALL

#ifdef GLOBAL_CALL

    Monitor2 monitor2(new Monitor1());

#endif

int main()
{
    std::cout << "in main" << std::endl;

#ifdef GLOBAL_CALL

    callingStaticMonitor2();
    callingStaticMonitor2();
    callingStaticMonitor2();

#else

    callingStaticMonitor2();
    callingStaticMonitor2();
    callingStaticMonitor2();

#endif

    std::cout << "out of main" << std::endl;

    return 0;
}