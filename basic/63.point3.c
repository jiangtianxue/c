#include <stdio.h>

void swap(int *pa, int *pb);

int main()
{
    int a = 5;
    int b = 6;

    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

// 在参数列表里面的*pa和*pb代表地址的意思，也就是说传入的是地址
// 在函数体内的*pa和*pb代表的是取值的意思，取pa和pb地址里面的值
void swap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

