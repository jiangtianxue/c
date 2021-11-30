#include <stdio.h>

int main()
{
	int x;
	int n = 0;
	printf("请输入一个整数：");
	scanf("%d", &x);
	do
	{
		x /= 10;
		n++;
		
	}
	while(x != 0);
	printf("这个整数的位数是：");
	printf("%d\n", n);
	return 0;
}