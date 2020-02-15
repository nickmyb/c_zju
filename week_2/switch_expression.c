#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y;

    scanf("%lf", &x);
    printf("x = %f\n", x);

    int i = -1;
    i = (x >= 0) + (x > 0);

    switch (i) {
        case 0:
            y = -1;
            break;
        case 1:
            y = 0;
            break;
        case 2:
            y = 2 * x;
            break;
        default:
            printf("bug\n");
    }

    printf("f(x) = %.2f\n", y);

    return 0;
}