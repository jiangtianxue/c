#include <stdio.h>

int main()
{
    double ff = 1234.4321;
    float f = 1234.5678;

    float a;
    double b;

    // %f和%lf是float和double的输入的类型表示
    scanf("%f", &a);
    scanf("%lf", &b);

    // %e和%E是科学计数法输出
    printf("%e, %f, %E\n", ff, ff, ff);
    printf("%e, %f, %E\n", f, f, f);

    printf("%f\n", a);
    printf("%f\n", b);

    double c = 1e-10;
    // 指定输出小数点后16位，并且会进行舍入
    printf("%e, %.16f\n", c, c);

    printf("%.3f\n", -0.0049);
    // 在计算机内部实际中的数字并不是-0.0049，因为有些数值并不能被精确表达，这就是精度问题
    printf("%.30f\n", -0.0049);
    printf("%.3f\n", -0.00049);
    return 0;
}