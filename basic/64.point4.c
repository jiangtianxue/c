#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int *a;
    int i;

    printf("输入数量：");
    scanf("%d", &number);

    // 动态内存分配，以字节为单位
    // malloc返回的是void类型，a是int类型，所以需要强制转换一下
    a = (int*)malloc(number*sizeof(int));

    for (i=0; i<number; i++)
        scanf("%d", &a[i]);
    for (i=number-1; i>=0; i--)
        printf("%d\n", a[i]);

    // 需要释放内存
    free(a);

    return 0;
}