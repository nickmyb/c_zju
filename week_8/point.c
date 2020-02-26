/**
 * 数组变量本身表达地址
 * int a[10]; int *p = a;
 * 数组的单元是变量,需要用&取地址
 * a == &a[0]
 *
 * []可以用于指针, p[0] == a[0]
 * *可以对数组做, *a = 25;
 *
 * 数组变量是const的指针,所以不能被赋值
 * int a[] -> int * const a
 *
 *
 * 字符串:
 * 以0（整数0）/ '\0'结尾的一串字符, 0 == '\0' != '0'
 * str 即 字符数组
 *
 * char *s = "Hello World!"  // "Hello World!"在代码段,只读
 * char s[] = "Hello World!"
 *
 * char *string;
 * scanf("%s", string);
 * 可能报错,例如未初始化的string指向代码段的地址,只读
 */
#include <stdio.h>

/**
 * IN:
 * 12345678 12345678
 *
 * OUT:
 * ##12345678##
 *
 * ???
 */
int main()
{
    char a1[8];
    char a2[8];
    scanf("%s", a1);
    scanf("%s", a2);

    printf("%s##%s##\n", a1, a2);
}