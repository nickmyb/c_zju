#include <stdio.h>
/**
 * typedef
 * typedef int Length;
 * Length l;
 */

int main()
{
    typedef struct ADate {
        int month;
        int day;
        int year;
    } Date;
    Date d = {1, 30, 2020};

    typedef struct {
        int x;
        int y;
    } Point;
}