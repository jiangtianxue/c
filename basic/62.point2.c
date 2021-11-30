#include <stdio.h>

void f(int *p);

int main(void)
{
    int i = 6;
    printf("&i=%p\n", &i);
    f(&i);

    return 0;
}

// 传地址，可以访问外面变量的能力
void f(int *p)
{
    printf("p = %p\n", p);
    printf("*p=%d\n", *p);
    *p = 26;
    printf("*p=%d\n", *p);
}