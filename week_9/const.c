#include <stdio.h>

int main()
{
    /**
     * 1. 指针是const
     */
    int v1 = 1;
    int * const p1 = &v1;  // p1是const
    *p1 = 2;  //可以改变p1所指向的值
    printf("*p1 = %d\n", *p1);
    int v2 = 2;
    // p1 = &v2;  // ERROR!!!

    /**
     * 2. 所指是const,不能通过这个指针去修改这个变量（并不能使得这个指针变量成为const或者指针所指的变量成为const）
     */
    int v3 = 3;
    const int *p2 = &v3;
    // *p2 = 4;  // ERROR!
    v3 = 4;
    int v5 = 5;
    p2 = &v5;
    printf("*p2 = %d\n", *p2);

    /**
     * int 1;
     * const int *p1 = &i;
     * int const *p2 = &i;
     * int * const p3 = &i;
     *
     * const只有两种含义
     * 看const和*的位置
     * * const: 指针的值不可变
     * const *: 不能通过*p改变指向变量的值
     */

    /**
     * 将非const的值转换为const
     */
    void f(const int *p);
    int m = 1;
    f(&m);
    const int n = 2;
    f(&n);
    // n += 1;  // ERROR!!!

    /**
     * const数组
     * 数组已经是 * const
     * 所以const type arr[]代表数组的每个元素都是const
     */

    /**
     * 指针运算
     * *(p + n) = p[n]
     *
     * p1 - p2 = sizeof(type)
     *
     * *p++
     * ++ > *, 但 p++ 返回 p+1前 的结果
     * *p++在某些CPU,直接对应一条汇编指令
     *
     * 指针支持 <, <=, ==, >, >=, !=
     *
     * 不同类型的指针是不能互相赋值的
     * 因为在*p取值时要根据指针所指对象类型向后读对应字节数,避免用错
     */

}