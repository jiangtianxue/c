#include <stdio.h>

int main()
{
	int x;
	int n = 0;
	printf("请输入一个正整数：");
	scanf("%d", &x);
	while(x > 0)
	{
		n++;
		x /= 10;
	}
	printf("这个数的个数是：");
	printf("%d\n", n);
	return 0;
}