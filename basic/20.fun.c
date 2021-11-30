#include <stdio.h>

int sum(int begin, int end)
{
	int i;
	int sum = 0;
	for (i=begin; i<=end; i++)
	{
		sum += i;
	}
	return sum;
}


int main(int argc, char const *argv[])
{
	int a, b, c, d;
	a = sum(1, 10);
	b = sum(20, 30);
	c = sum(35, 45);
	printf("%d\n", a + b + c);	
	return 0;
}