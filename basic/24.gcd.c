#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	int t;
	printf("请输入两个数字，用分号隔开，求取最大公约数：");
	scanf("%d %d", &a, &b);
	while(b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("gcd=%d\n", a);
	return 0;
}