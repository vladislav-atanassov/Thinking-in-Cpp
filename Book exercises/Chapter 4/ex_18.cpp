#include <iostream>

char* function(char* word, const int size)
{
    char* arr = new char[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = word[i];
    }

    return arr;
}

int main()
{
    const int size = 13;
    char word[size] = "abracadabra";

    char* arr = function(word, size);

    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }    
    std::cout << std::endl;

    std::cout << "Size of word: " << sizeof(word) << std::endl;    
    std::cout << "Size of arr: " << sizeof(arr) << std::endl;

    delete arr;

    return 0;
}