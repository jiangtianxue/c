#include <stdio.h>

int main()
{
    int x = 1;
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", &p);
    printf("%d\n", *p);

    int arr[] = {1,5,8,12,42};
    int *q = arr;
    int a = *q;
    int b = *q;
    int c = *q++;
    int d = *q;
    int e = *++q;
    int f = *q;
    int g = (*q)++;
    int h = *q;
    printf("%d\n", arr[2]);
    int i = *q;
    int j = ++*q;
    printf("%d\n", arr[2]);
    int k = *(q++);
    printf("%d\n", arr[2]);
    int l = *q;
    printf("%d\n", arr[2]);
    printf("a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, g=%d, h=%d, i=%d, j=%d, k=%d, l=%d\n", 
            a, b, c, d, e, f, g, h, i, j, k, l);

    *q++;
    printf("%d\n", *q);


    return 0;

}