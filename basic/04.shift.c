#include <stdio.h>

int main()
{
	int a = 0x80000000;

	unsigned int b = 0xffffffff;
	unsigned int c = 0x80000000;

	printf("a=%d\n", a);
	printf("b=%u\n", b);
	printf("c=%u\n", c);

	return 0;
}
