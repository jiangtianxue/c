#include <stdio.h>

int isPrime(int x, int knownPrimes[], int numberofKnownPrimes)
{
    int ret = 1;
    int i;
    for (i=0; i<numberofKnownPrimes; i++)
    {
        if ( x% knownPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}


// 找出前100个素数
int main(void)
{
    const int number = 100;
    // 这里使用number好像不行，必须使用数字100，不知道为什么
    int prime[100] = {2};
    int count = 1;
    int i = 3;
    while (count < number)
    {
        if (isPrime(i, prime, count))
            prime[count++] = i;
        i++;
    }

    for (i=0; i<number; i++)
    {
        printf("%d", prime[i]);
        if ( (i+1)%5 ) 
            printf("\t");
        else
            printf("\n");
    }

    return 0;
    
}
