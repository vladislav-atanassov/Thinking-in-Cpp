int main()
{
    puts("Hello World!");

    /*
    Console output:
        ex_1.c: In function 'main':
    ex_1.c:3:5: warning: implicit declaration of function 'puts' [-Wimplicit-function-declaration]
        3 |     puts("Hello World!");
          |     ^~~~
    ex_1.c:1:1: note: include '<stdio.h>' or provide a declaration of 'puts'
      +++ |+#include <stdio.h>
        1 | int main()
    Hello World!
    */
}