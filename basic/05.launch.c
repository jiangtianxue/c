#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	while(n > 0)
	{
		printf("%d\n", n);
		n--;
	}
	printf("发射！\n");
	return 0;
}