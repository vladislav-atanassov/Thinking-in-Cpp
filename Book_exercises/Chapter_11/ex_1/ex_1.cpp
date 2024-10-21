#include <stdio.h>

typedef struct Bird
{
    int fly;
    int age;
} Bird;

typedef struct Rock
{
    double size;
} Rock;

int main()
{
    Bird *bird;
    Rock *rock;
    void *voidPtr = &bird;

    printf("voidPtr: $%p, rock: %zu", voidPtr, (unsigned long long)&rock);

    return 0;
}