#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);

    int one = i % 10;
    int ten = i / 10 % 10;
    int hundred = i / 100;
    int reversed = hundred + ten * 10 + one * 100;
    printf("%d", reversed);
}
