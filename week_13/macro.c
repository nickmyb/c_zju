#include <stdio.h>

/**
 * #define <name> <value>
 * 结尾没有;不是C的语句
 * 名字必须是一个单词,值可以使各种东西
 * 完全的文本替换
 * gcc --save-temps
 */

#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2 * PI  // C和宏定义的注释相同
#define PI3 3 * PI 3  // C和宏定义的注释相同
#define PRT printf("%f ", PI); \
            printf("%f\n", PI2)
#define _DEBUG  // 没有值的宏,一般用于条件编译,后面有其他的编译预处理指令来检查这个宏是否已经被定义过了
// 预定义的宏  __LINE__ __FILE__ __DATE__ __TIME__ __STDC__

// 带参数的宏
// 一切都要括号
// 1. 整个值需要括号
// 2. 参数出现的每个地方都要括号
#define cube(x) ((x)*(x)*(x))

// 宏的错误使用
#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578

int main()
{
    printf(FORMAT, PI2 * 3);
    // printf(FORMAT, PI2 * 3);  // ERROR!!!
    PRT;
    printf("%s:%d\n", __FILE__, __LINE__);
    printf("%s,%s\n", __DATE__, __TIME__);

    printf("%d\n", cube(5));

    printf("%f\n", RADTODEG1(5 + 2));
    printf("%f\n", 180 / RADTODEG2(1));

    return 0;
}