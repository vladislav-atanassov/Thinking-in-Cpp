#include <iostream>

void outputPrimeNumbers(int maxNumber)
{
    for(int i = 2; i <= maxNumber; i++)
    {
        bool isPrime = true;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            std::cout << i << ' ';
        }
    }

    std::cout << std::endl;
}

int main()
{
    outputPrimeNumbers(17);

    return 0;
}