#ifndef MONITOR2_H
#define MONITOR2_H

#include <iostream>
#include "Monitor1.h"

class Monitor2
{
private:
    Monitor1* monitor1_ptr;

public:
    Monitor2(Monitor1* monitor1) : monitor1_ptr(monitor1) 
    { 
        monitor1_ptr->incident(); 
        monitor1_ptr->print(); 
    }

    ~Monitor2() 
    { 
        monitor1_ptr->decrement(); 
        monitor1_ptr->print(); 
    }

};

#endif // MONITOR2_H