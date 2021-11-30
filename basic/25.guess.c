#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	srand(time(0));
	int number = rand()%100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好一个0-100之间的数字。\n");
	do
	{
		printf("请猜猜这个数字是多少：");
		scanf("%d", &a);
		count++;
		if (a > number)
		{
			printf("你猜的数字太大了。\n");
		}
		else if(a < number)
		{
			printf("你猜的数字太小了。\n");
		}
	}
	while(a != number);
	printf("太好了，你只用了%d次就猜中了。\n", count);
	return 0;
}