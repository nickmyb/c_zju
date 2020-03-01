#include <stdio.h>

struct point1 {
    int x;
    int y;
};
struct point1 p1, p2;

struct {
    int x;
    int y;
} p3, p4;

struct point3 {
    int x;
    int y;
    int z;
} p5, p6;

int main()
{
    struct point3 p7 = {1, 2};
    struct point3 p8 = {.x=1, .y=2};
    printf("p7.z: %d\n", p7.z);
    printf("p8.z: %d\n", p8.z);

    struct point1 p9 = (struct point1){5, 10};
    struct point1 p10;
    p10 = p9;
    p10.y = 15;  // p9 != p10,只是copy成员的值
    printf("p9.y = %d\n", p9.y);
    printf("p10.y = %d\n", p10.y);
}