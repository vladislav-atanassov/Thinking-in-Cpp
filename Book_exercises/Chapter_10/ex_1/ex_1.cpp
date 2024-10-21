#include <iostream>

constexpr int arrSize = 10;
constexpr int endOfArr = -1;

void func(int begining = 0)
{
    static int arr[arrSize] = {1,2,4,3,2,2,-1,2,2,0};

    for(int i = begining; i < arrSize; i++)
    {
        if(arr[i] == endOfArr)
        {
            break;
        }

        std::cout << arr[i] << ", ";
    }
    
    std::cout << std::endl;
    
    return;
}

int main()
{
    func();     // Expected: 1, 2, 4, 3, 2, 2, 
    func(6);    // Expected: Big nothing 
    func(7);    // Expected: 2, 2, 0, 

    return 0;
}