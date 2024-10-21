#ifndef MONITOR1_H
#define MONITOR1_H

#include <iostream>

class Monitor1
{
private:
    int incidentCallCounter = 0;

public:
    Monitor1() {}
    ~Monitor1() {}

    void incident() { incidentCallCounter++; }

    void decrement() { incidentCallCounter--; } 

    void print() const { std::cout << incidentCallCounter << std::endl; }

};

#endif // MONITOR1_H