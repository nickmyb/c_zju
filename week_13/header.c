#include <stdio.h>
#include "header.h"
/**
 * 一个.c是一个编译单元,编译器每次编译只处理一个编译单元
 * 编译后形成.o, 后面link
 *
 * 需要把函数原型放到一个头文件中,在需要调用的函数的源代码中#include这个头文件,就能正确知道函数原型
 * 否则可以成功link,但传入和传出的参数会出错
 */

double printf_and_return(double x)
{
    printf("printf_and_return(%f)\n", x);
    return x;
}

int G = 1;
