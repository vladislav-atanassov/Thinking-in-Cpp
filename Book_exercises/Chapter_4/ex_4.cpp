#include <iostream>

typedef struct S
{
    int a = 9;
} S;

void f(S* s, int b) { s->a = b; };
void g(S* s) { std::cout << s->a << std::endl; };

int main()
{
    S s;

    f(&s, 5);
    g(&s);

    return 0;
}