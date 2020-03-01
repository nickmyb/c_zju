#include <stdio.h>
#include <stdlib.h>
#include "array.h"

Array array_create(int init_size)
{
    Array a;
    a.size = init_size;
    a.array = (int *)malloc(sizeof(int) * a.size);
    return a;
}

void array_free(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

// 封装
int array_size(const Array *a)
{
    return a->size;
}
int* array_at(Array *a, int index)
{
    if (index >= a->size)
    {
        array_inflate(a, a->size);
    }
    return &(a->array[index]);
}

void array_inflate(Array *a, int more_size)
{
    int *p = (int *)malloc(sizeof(int) * (a->size + more_size));
    for (int i=0; i<a->size; i++)
    {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(int argc, char const *argv[])
{
    Array a = array_create(1);
    printf("%d\n", array_size(&a));
    *array_at(&a, 0) = 10;
    printf("%d\n", *array_at(&a, 0));

    printf("\n----------\n\n");

    int number;
    scanf("%d", &number);

    int cnt = 0;
    while (number != -1)
    {
        *array_at(&a, cnt++) = number;
        printf("sizeof(Array): %d, ", a.size);
        for (int i=0; i<cnt; i++)
        {
            printf("%d ", a.array[i]);
        }
        printf("\n");
        scanf("%d", &number);

    }
    array_free(&a);
    return 0;
}