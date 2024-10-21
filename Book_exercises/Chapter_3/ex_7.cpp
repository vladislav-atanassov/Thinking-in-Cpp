#include <iostream>

void pointerStr(std::string* str)
{
    str->append(" passed as pointer");

    std::cout << *str << std::endl;
}

void referenceStr(std::string& str)
{
    str.append(" then passed as reference");

    std::cout << str << std::endl;
}

/*
int main()
{
    std::string s = "apple";

    std::cout << "Original string: " << s << std::endl;

    pointerStr(&s);
    referenceStr(s);

    return 0;
}
*/