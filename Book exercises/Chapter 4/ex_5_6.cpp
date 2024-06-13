#include <iostream>

typedef struct S
{
    int a = 9;
    void f(S* s, int b) { this->a = b; }; // using the this keyword
    void g(S* s) { std::cout << s->a << std::endl; };
} S;

int main()
{
    S s;

    s.f(&s, 5);
    s.g(&s);

    return 0;
}