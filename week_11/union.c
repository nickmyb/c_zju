#include <stdio.h>

int main()
{
    typedef union {
        /**
         * 所有成员占同一份内存
         * chi.i = 1234;
         * int 表示: 4bytes
         * 00, 00, 04, D2
         * 由于小端对齐,低位在前,实际存放为
         * D2, 04, 00, 00
         * ch[0] = D2;
         */
        int i;
        char ch[sizeof(int)];
    } CHI;
}