#include <stdio.h>

void f(int x)
{
    printf("exec void f(int %d)\n", x);
}

void g1(int x)
{
    printf("g1(%d)\n", x);
}

void g2(int x)
{
    printf("g2(%d)\n", x);
}


int main()
{
    /**
     * 函数名就是一个地址
     */
    void (*pf)(int) = f;
    printf("%p\n", pf);

    f(1);
    (*pf)(2);
    pf(2);

    void (*f[])(int) = {g1, g2};
    (*f[0])(1);  // (*f[0])(1) == f[0](1) ???
    (*f[1])(1);

    return 0;
}