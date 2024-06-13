#include <iostream>


int main()
{
    int x = 1;
    int y = 2;
    int z =3;

    int a = x + y -2/2 + z;    
    int b = x + (y - 2)/(2 - z);

    std::cout << "Result from" << "x + y -2/2 + z" << " is: " << a << std::endl;
    std::cout << "Result from" << "x + (y -2)/(2 + z)" << " is: " << b << std::endl;

    return 0;
}