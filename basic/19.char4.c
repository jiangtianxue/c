#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ac[] = {0,1,2,3};
	char *p = ac;
	printf("p=%p\n", p);
	printf("p+1=s%p\n", p+1);
	int ai[] = {0,1,2,3};
	int *q = ai;
	printf("q=%d\n", *q);
	printf("q+1=%d\n", *(q+1));
	printf("sizeof(char) = 4\n");
	printf("sizeof(int) =1 \n");
	return 0;
}