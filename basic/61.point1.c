#include <stdio.h>

int main()
{
    int i = 0;
    int p;
    // %p会作为一个地址输出，前面加上0x，以16进制显示
    printf("%p\n", &i);
    printf("%p\n", &p);

    printf("size of int : %ld\n", sizeof(i));

    int a[10];
    printf("%p\n", &a);
    printf("%p\n", a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    

    return 0;
}
