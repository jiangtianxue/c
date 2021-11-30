#include <stdio.h>

void sum(int begin, int end);     //函数的原型声明，可以让函数定义放在主程序后面

int main(int argc, char const *argv[])
{
	sum(1, 10);
	sum(20, 30);
	sum(35, 45);
	printf("函数的原型声明放在主程序前面，可以让函数定义放在主程序后面，可以不写输入参数。\n");
	return 0;
}

void sum(int begin, int end)      //函数的定义
{
	int i;
	int sum = 0;
	for (i=begin; i<=end; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
}