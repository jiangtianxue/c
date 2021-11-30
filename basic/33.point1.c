#include <stdio.h>

int main()
{
	int x = 1;
	int *p;
	p = &x;
	printf("%d\n", *p);
	*p = 2; // p指针已经指向了x，所以通过指针p改变了变量值之后，x也会改变
	printf("%d\n", *p);
	printf("%d\n", x);
}