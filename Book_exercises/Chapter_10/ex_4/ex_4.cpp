#include <iostream>

class Monitor
{
private:
    int incidentCallCounter = 0;

public:

    Monitor() {}
    ~Monitor() {}

    void incident() { incidentCallCounter++; };

    void print() const { std::cout << incidentCallCounter << std::endl; };
};

void callingStaticmonitor()
{
    static Monitor statMonitor;

    statMonitor.incident();
    statMonitor.print();
}

int main()
{
    callingStaticmonitor();
    callingStaticmonitor();
    callingStaticmonitor();
    callingStaticmonitor();

    return 0;
}