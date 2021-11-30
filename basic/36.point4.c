#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ac[] = {0,1,2,3,4,5,-1};
	char *p = &ac[0];
	int i;
	while( *p != -1 )
	{
		printf("%d\n", *p++);
	}
	return 0;
}