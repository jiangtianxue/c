#include <stdio.h>

void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;               //被调用函数无法修改函数传过来的值，因为处于两个不同的变量空间
}

void swap2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;      //地址未改变，但是这一地址中所对应的内存段中的内容发生了变化，通过地址这一属性可以对调用函数的变量进行修改
}

int main()
{
	int x = 1, y = 2;

	printf("%p\n", &x);
	printf("%p\n", &y);

	swap1(x, y);
	printf("%d %5d\n", x, y);
	printf("%p\n", &x);
	printf("%p\n", &y);

	swap2(&x, &y);
	printf("%d %5d\n", x, y);
	printf("%p\n", &x);
	printf("%p\n", &y);

	return 0;
}