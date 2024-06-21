#include <iostream>
#include <string>

class Message
{
public:
    std::string message;

    Message() {}
    Message(const std::string& msg = "Hello!\n") : message(msg) {} 
    ~Message() {};   

private:
    // In this particular case I think that it is more convinient to use the default
    // argument functionality instead of overloading the function print()
    // because I assume that the initial message will be used rarely so 
    // the function will also rarely waste memory to call the empty default argument
    // but with the overloading the class will hold one more function pointer always 
    //? void print(const std::string& msg = "") const { std::cout << message << msg << std::endl; };
    //? Or
    void print(void) const { std::cout << message << std::endl; }
    void print(const std::string& msg) const { std::cout << message << msg << std::endl; }; 
};
