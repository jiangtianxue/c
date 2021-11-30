#include <stdio.h>

int main()
{
    int hour1, hour2;
    int minute1, minute2;

    // 只有printf才会有输出，scanf不行
    printf("输入时间，分别是第一个时间的小时分钟和第二个时间的小时分钟：");

    // scanf有取地址符，printf没有
    scanf("%d, %d, %d, %d", &hour1, &minute1, &hour2, &minute2);

    int differ = (hour1 * 60 + minute1) - (hour2 * 60 + minute2);
    printf("时差是%d小时，%d分钟\n", differ/60, differ%60);

    return 0;
}