#include <iostream>

class Object
{
public:
    int var;

};

int main()
{
    Object ob;
    Object* obPtr = &ob;

    int Object::*ptrMem = &Object::var;

    obPtr->*ptrMem = 9;

    std::cout << "obPtr->var: " << obPtr->var << std::endl;

    return 0;
}

/*
Pointers to members are quite limited: they can be assigned
only to a specific location inside a class. You could not, for example,
increment or compare them as you can with ordinary pointers.
*/