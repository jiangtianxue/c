#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	char c;
	scanf("%d %c", &i, &c);
	printf("i=%c, c=%d, c='%c'\n", i, c, c);
	return 0;
}