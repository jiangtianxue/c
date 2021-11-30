# include <stdio.h>
int main()
{
    printf ("%d\n", 5==3);
    printf ("%d\n", 5<3);
    printf ("%d\n", 5>3);

    // >=优先级比+要低
    printf("%d\n", 7>=3+4);
    /*
    这里可以进行多行注释
    */
    return 0;
}