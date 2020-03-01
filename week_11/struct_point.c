#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
} my_day;

struct date* get_date(struct date *d);

int main()
{
    struct date *p = &my_day;
    (*p).month = 12;
    // 指针所指的结构变量中的成员
    p->month = 12;
    printf("p.month = %d\n", p->month);

    struct date d1;
    struct date *d2 = get_date(&d1);
    printf("d1 address = %p\nd2 = %p\n", &d1, d2);

    *get_date(&d1) = (struct date){1, 1, 2020};
    printf("d1.month = %d, d1.day = %d, d1.year = %d\n", d1.month, d1.day, d1.year);
}

struct date* get_date(struct date *d)
{
    scanf("%d%d%d", &d->month, &d->day, &d->year);
    printf("IN: %d-%d-%d\n", d->month, d->day, d->year);
    return d;
}