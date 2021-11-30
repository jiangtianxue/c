#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	double sum = 0;
	int cnt = 0;
	int i, n;
	int number[10];
	printf("你想输入多少个数字：");
	scanf("%d", &n);
	printf("请输入%d个数字，以-1作为结尾数字，\n", n);
	printf("计算平均值并输出大于平均值的数字：");
	scanf("%d", &x);
	while(x != -1)
	{
		number[cnt] = x;
		sum += x;
		cnt ++;
		scanf("%d", &x);
	}

	if (cnt > 0)
	{
		printf("%f\n", sum / cnt);
		for (i=0; i<cnt; i++)
		{
			if (number[i] > sum / cnt)
			{
				printf("%d\n", number[i]);
			}
		}
	}
	return 0;
}