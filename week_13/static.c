#include <stdio.h>

int s(void);
int G = 1;

int main()
{
    s();
    s();
    s();
}

int s(void)
{
    /**
     * 静态本地变量 是特殊的全局变量
     * 具有全局的生存期,函数内的局部作用域
     * 只有在第一次进入这个函数时初始化,以后进入函数会保持上次离开时候的值
     */
    static int i = 0;
    int j = 0;

    printf("static int i = %d\n", i);
    printf("static int i address = %p\n", &i);
    printf("local int j address = %p\n", &j);
    printf("global int G address = %p\n", &G);

    i += 1;

    return 0;
}