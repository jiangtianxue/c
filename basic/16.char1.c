#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c, d;
	c = 1;
	d = '1';
	if (c==d)
	{
		printf("相等\n");
	}
	else
	{
		printf("不相等\n");
	}
	printf("c=%d\n", c);
	printf("d=%c\n", d);
	return 0;
}