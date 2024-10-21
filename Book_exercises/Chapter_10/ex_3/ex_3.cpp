#include <iostream>

class IntArr
{
private:

    static const int arrSize = 10;
    const int var;
    static int specVar;
    int arr[arrSize] = {5};

public:

    IntArr(const int variable) : var(variable) {}
    ~IntArr() {}

    void printClassMembers() const;
};

void IntArr::printClassMembers() const
{
    std::cout << arrSize << ", " << var 
        << ", " << specVar << ", " << std::endl;

    for(int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int IntArr::specVar = 1809;

int main()
{
    IntArr intArr(7);


    intArr.printClassMembers();


    return 0;
}