#include <stdio.h>

void minmax(int *a, int len, int *min, int *max);

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int min, max;
	printf("sizeof(a)=%lu", sizeof(a));
	printf("  sizeof(a[0])=%lu\n", sizeof(a[0]));
	printf("\nmain a=%p\n", a);
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	printf("a[0]=%d\n", a[0]);
	printf("min=%d, max=%d\n", min, max);
	int *p = &min;
	printf("*p=%d\n", *p);
	printf("p[0]=%d\n", p[0]);
	printf("*a=%d\n", *a);
	return 0;
}

void minmax(int *a, int len, int *min, int *max)
{
	int i;
	printf("minmax sizeof(a)=%lu\n", sizeof(a));
	printf("minmax a=%p\n", a);
	a[0]=1000;
	*min = *max = a[0];
	for (i=1; i<len; i++)
	{
		if (a[i] < *min)
		{
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}