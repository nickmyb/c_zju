#include <stdio.h>

/**
 * 返回本地变量的地址是危险的,这个本地变量的地址会在别的函数中继续被分配使用
 * 返回全局变量或者静态本地变量的地址是安全的
 * 返回在函数内malloc的内存是安全的,但容易造成问题
 * 最好的做法是返回传入的指针
 */

int* f(void)
{
    int i = 12;
    return &i;
}

void g(void)
{
    int k = 24;
    printf("k = %d\n", k);
}

int main()
{
    int *p = f();
    printf("*p = %d\n", *p);
    g();
    printf("*p = %d\n", *p);
    return 0;
}