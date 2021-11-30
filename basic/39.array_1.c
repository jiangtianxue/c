#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    // 定义数组
    int number[100];

    scanf("%d", &x);
    while (x!=-1)
    {
        // 数组中的元素赋值
        number[cnt] = x;
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }

    if (cnt>0)
    {
        printf("%f\n", sum/cnt);
        int i;
        for (i=0; i<cnt; i++)
        {
            // 使用数组元素
            if (number[i] > sum/cnt)
                printf("%d\n", number[i]);
        }
    }

    return 0;
}