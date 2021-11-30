#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	int i;
	int isPrime = 1;
	printf("请输入一个数字：");
	scanf("%d", &x);
	for (i=2; i<x; i++)
	{
		if (x % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 0)
	{
		printf("%d不是素数\n", x);
	}
	else
	{
		printf("%d是素数\n", x);
	}
	return 0;
}