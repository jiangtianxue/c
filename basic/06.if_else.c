#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	int max;
	printf("请输入三个数字，以空格隔开：");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			max = a; 
		}
		else
		{
			max = c;
		}
	}

	else
	{
		if (b > c)
		{
			max = b; 
		}
	    else
		{
			max = c;
		}
	}

	printf("the maximine number is :%d\n", max);

	return 0;
}