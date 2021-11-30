#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("请输入一个数：");
	scanf("%d", &n);
	long fact = 1;
	int i = 1;
	for (i=1; i<=n; i++)
	{
		fact *= i;
	}
	printf("%d的阶乘是%ld\n", n, fact);
	return 0;
}