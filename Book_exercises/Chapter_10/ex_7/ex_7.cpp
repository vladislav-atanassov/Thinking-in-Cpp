#include <iostream>

class ExampleClass
{
public:
    ExampleClass() {} 
    ~ExampleClass() {std::cout << "Destructor" << std::endl; exit(7); } 

};

ExampleClass exClass;

int main()
{
    std::cout << "Start of main" << std::endl;
    
    std::cout << "End of main" << std::endl;

    return 0;
}