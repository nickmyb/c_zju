#include <stdio.h>

struct point {
    /**
     * 好像结构体成员会自带初始值的,不知道是不是编译器的优化
     */
    int x;
    int y;
    int* z;
};

struct point get_point(void)
{
    struct point p1;
    printf("init p1.x = %d\n", p1.x);
    printf("init point p1.z = %d\n", p1.z);
    scanf("%d%d", &p1.x, &p1.y);
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    printf("p1.address = %p\n", &p1);
    return p1;
}

int main()
{
    struct point p2 = get_point();
    printf("p2.address = %p\n", &p2);
}