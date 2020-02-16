#include <stdio.h>

int main()
{
    int in = 0, num = 0;
    scanf("%d", &in);
    num = in;

    int bit = 1;
    int power = 1;
    int remainder = 0;
    int ret = 0;

    do
    {
        remainder = num % 10;
        if (remainder % 2 == bit % 2) {
            ret += power;
        }
        power *= 2;
        bit += 1;
        num /= 10;
    } while (num != 0);

    printf("%d's eig = %d\n", in, ret);
}
