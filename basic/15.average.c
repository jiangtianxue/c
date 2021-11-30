#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum = 0;
	int count = 0;
	int number;
	do
	{
		printf("请输入一个整数，以-1为结束：");
		scanf("%d", &number);
		if (number != -1)
		{
			sum = sum + number;
			count++;
		}
	}while(number != -1);
	printf("上述数字的平均数是：%f\n", 1.0*sum/count);

	return 0;
}