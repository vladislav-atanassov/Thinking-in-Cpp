#include <iostream>

#define FUNC_DEFAULT_ARGS true

class IntClass
{
public:
    std::string message;

    IntClass() {}
    ~IntClass() {};   

#if FUNC_DEFAULT_ARGS == true
    int sum(int a = 0, int b = 0, int c = 0, int d = 0) { return (a + b + c + d); };
#else
    int sum(int a) { return a; };
    int sum(int a, int b) { return (a + b); };
    int sum(int a, int b, int c) { return (a + b + c); };
    int sum(int a, int b, int c, int d) { return (a + b + c + d); };
#endif

};

int main()
{
    IntClass intClass;

    // The main remains unchanged
#if FUNC_DEFAULT_ARGS == true
    std::cout << intClass.sum(1) << std::endl;   
    std::cout << intClass.sum(1, 7) << std::endl;   
    std::cout << intClass.sum(1, 7 ,9) << std::endl;   
    std::cout << intClass.sum(1, 7, 9, 7) << std::endl;     
#else
    std::cout << intClass.sum(1) << std::endl;   
    std::cout << intClass.sum(1, 7) << std::endl;   
    std::cout << intClass.sum(1, 7 ,9) << std::endl;   
    std::cout << intClass.sum(1, 7, 9, 7) << std::endl;   
#endif
}