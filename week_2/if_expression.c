#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);
    printf("number: %d\n", i);

    if (i < 0) {
        printf("%d is negative.\n", i);
    } else if (i > 0) {
        printf("%d is positive.\n", i);
    } else {
        printf("%d is zero.\n", i);
    }
}
