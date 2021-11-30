#include <stdio.h>

int main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p = x;
	printf("x的地址为：%p\n", x);
	printf("x[0]的地址为：%p\n", &x[0]);
	printf("p的地址为：%p\n", &p);

	p += 2;
	printf("*(p+2)的值为：%d\n", *p);
}