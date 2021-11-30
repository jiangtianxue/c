#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	int ret = 0;
	printf("请输入一个整数：");
	scanf("%d", &x);
	int t = x;
	while(t > 1)
	{
		t /= 2;
		ret++;
	}
	printf("log2 of %d is %d\n", x, ret);
	return 0;
}