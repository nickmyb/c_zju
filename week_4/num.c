#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);

    int num = i;
    int len = 0;
    int power = 1;
    while (i > 0)
    {
        i /= 10;
        len += 1;
        power *= 10;
    }
    power /= 10;

    int quotient = 0;
    while (power > 9)
    {
        quotient = num / power;
        printf("%d ", quotient);
        num -= power * quotient;
        power /= 10;
    }
    printf("%d", num);

    return 0;
}