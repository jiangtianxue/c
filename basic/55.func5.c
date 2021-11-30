#include <stdio.h>

void swap(int a, int b);

int main()
{
    int a = 5, b = 6;
    
    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}
// 每个函数都有自己的变量空间，参数也位于这个独立的空间中，和其他函数没有关系
// main函数里的a和b 和swap函数的a和b没有任何关系
// 函数的传递都是传值，所以这里a和b并没有进行交换
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}