#include <iostream>

int fibb(int num)
{
    if(num <= 1)
    {
        return num;
    }

    return (fibb(num - 1) + fibb(num - 2));
}

void func(bool reset = false)
{
    static int currNumInSequence;

    if(reset)
    {
        currNumInSequence = 0;
    }

    std::cout << fibb(currNumInSequence++) << std::endl;
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 7)
        {
            func(true);
        }

        func();
    }
    
    return 0;
}