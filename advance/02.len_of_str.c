#include <stdio.h>

int len_of_str(char a[]);

int main()
{
    char a[10];
    /* 单个字符的时候使用单引号 */
    char b = 'b';
    int num1, num2;
    printf("\nenter a string: ");
    /* scanf函数最多可以输入长度为10的字符串 */
    scanf("%s", a);
    num1 = len_of_str(a);
    num2 = len_of_str_point(a);
    printf("%c\n", b);
    /*  这里已经是单个字符，所以需要用%c而不是%s 
        同时需要注意，字符串和数组是相同的      */
    printf("%c\n", a[0]);
    printf("%c\n", *(a+2));
    printf("the length of %s is %d.\n", a, num1);
    printf("the length of %s is %d.\n", a, num2);
    printf("the length of %s is %ld.\n", a, sizeof(a));
    return 0;

}

int len_of_str(char a[])
{
    int n = 0;
    while (a[n] != 0)
    {
        n++;
    }
    /*  这里会打印8，因为sizeof函数会变成long unsigned，也就是8个字节   
        而这里打印的就是这个long unsigned所占据的字节数，而不是a字符串的长度    */
    printf("%ld\n", sizeof(a));
    return n;
    
}


int len_of_str_point(char *s)
{
    char *p = s;
    while (*p++)
        ;
    return(p - s - 1);
    
}