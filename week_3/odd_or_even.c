#include <stdio.h>

int main()
{
    int odd_count = 0, even_count = 0;

    int in = -1;
    scanf("%d", &in);

    while (in != -1) {
        if (in % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        scanf("%d", &in);
    }

    printf("odd_count: %d, even_count: %d\n", odd_count, even_count);
}