#include <stdio.h>

int main()
{
    char a, b;
    a = 127;
    b = a + 1;

    // 这里会出现溢出的情况
    printf("a=%d, b=%d\n", a, b);
    return 0;
}