#include <stdio.h>
int main()
{
    float a, b, c;

    // 带小数点默认是double而不是float，float需要用f或者F后缀来表明身份
    a = 1.234f;
    b = 1.123f;

    c = a + b;
    if(c ==  2.357)
        printf("equal\n");
    else
        // 实际在内部不是2.357
        printf("not equal c=%.10f, or %f\n", c, c);
    return 0;
}