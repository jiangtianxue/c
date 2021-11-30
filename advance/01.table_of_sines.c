#include <stdio.h>
#include <math.h>

/*  编译这个文件的时候需要使用命令
    gcc .c -lm -o .o
    这里的-lm是指定相应数学库的位置，具体可以百度
*/

int main(void)
{
    int     angle_degree;
    double  angle_radian, pi, value;

    /* print a header*/
    printf("\ncompute a table of the sine function\n\n");

    /*  obtain pi once for all or just use pi = M_PI, where
        M_PI is defined in the math.h
    */
    pi = 4.0 * atan(1.0);
    printf("value of PI = %lf \n\n", pi);
    printf("angle       sine\n");

    angle_degree = 0;
    /*initial angle value scan over angle*/
    while (angle_degree <= 360)
    /* loop until angle_degree > 360*/
    {
        angle_radian = pi * angle_degree / 180.0;
        value = sin(angle_radian);
        printf(" %3d    %f \n", angle_degree, value);
        angle_degree = angle_degree + 10;
        /*increment the loop index*/
    }
    return 0;
}