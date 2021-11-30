#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int x;
	int i;
	int isPrime = 1;
	for (x=2; x<=100; x++)
	{
		for (i=2; i<x; i++)
		{
			if (x % i == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 0)
		{
			//printf("%d不是素数\n", x);
		}
		else
		{
			printf("%d是素数\n", x);
		}
		isPrime = 1;
	}
	return 0;
}