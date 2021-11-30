#include <stdio.h>

int main()
{
	int a[5] = {0,1,2,3}; // 五位整数数组只有四个数字，则最后一个会填0
	int *p = a;
	int *q = &a[0];
	int *r = &a[3];

	int *s;
	int *t;
	int *u;

	s = a;
	t = &a[0];
	u = &a[3];

	for (int i=0; i<5; i++)
		printf("%d\n", a[i]);
	printf("\n");
	printf("\n");
	printf("\n");

	printf("%d\n", *p++);
	printf("%d\n", *p++);
	printf("%d\n", *q++);
	printf("%d\n", *q++);
	printf("%d\n", *s++);
	printf("%d\n", *s++);
	printf("%d\n", *t++);
	printf("%d\n", *t++);

	printf("%d\n", *r);
	printf("%d\n", *u);

	printf("%d\n", *r-*u);
	return 0;
}