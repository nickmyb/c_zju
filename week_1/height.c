#include <stdio.h>

int main()
{
    printf("请分别输入身高的英尺和英寸，"
           "如输入\"5 7\"表示5英尺7英寸：");

//    1.
//    int foot;
//    int inch;
//
//    scanf("%d %d", &foot, &inch);
//
//    // 12 != 12.0
//    double height = (foot + inch / 12.0) * 0.3048;
//
//    2.
    float foot;
    double inch;

    scanf("%f %lf", &foot, &inch);

    double height = (foot + inch / 12) * 0.3048;
    printf("身高是%f米。\n", height);

    return 0;
}
