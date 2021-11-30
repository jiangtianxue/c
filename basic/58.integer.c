#include <stdio.h>

int main()
{
    // char c = 255;

    // unsigned表示没有负数
    unsigned char c = 255;
    int i = 255;

    // char是8bit 1111_1111 是一个负数；int是32bit；
    printf("c=%d, i=%d\n", c, i);

    return 0;
}