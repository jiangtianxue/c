#include <stdio.h>

int main()
{
	const int number = 10;
	int x, i;
	int count[number];
	printf("输入十个数字(0~9)，计算每个数字出现次数\n");
	for (i=0; i<number; i++)
	{
		count[i] = 0;
	} 
	scanf("%d", &x);
	while(x != -1)
	{
		if (x >= 0 && x <= 9)
		{
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (i=0; i<number; i++)
	{
		printf("%d:%d\n", i,count[i]);
	}
	return 0;
}