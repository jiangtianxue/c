#include <stdio.h>
int main()
{
    int x;
    int ret = 0;

    scanf("%d", &x);
    int t = x;
    while (x>1)
    {
        x /= 2;
        ret ++;
    }

    printf("log of %d is %d \n", t, ret);

    return 0;
    
}