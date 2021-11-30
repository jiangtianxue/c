#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int i;
	float sum = 0.0;
	printf("请输入一个数字：");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		sum = sum + (1.0 / i);
	}
	printf("%f\n", sum);
	return 0;
}