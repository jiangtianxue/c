#include <stdio.h>

int main()
{
    const int number = 10;
    int x;
    int count[number];
    int i;
    for (i=0; i<number; i++)
        count[i] = 0;

    scanf ("%d", &x);
    while (x!=-1)
    {
        if (x>=0 && x<=9)
            count[x] ++;
        // 这里还需要一个scanf函数以实现一直读入
        scanf("%d", &x);
    }
           
    for (i=0; i<10; i++)
        printf("%d:%d\n", i, count[i]);
    
    return 0;
}