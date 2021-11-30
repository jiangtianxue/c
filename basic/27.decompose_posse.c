#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int x, quo=1, i, j, b;
	int count = 1;
	int out;
	int temp = 1;
	scanf("%d", &x);
	if(x <= 9)
	{
		count = 1;
		printf("%d\n", x);
	}
	else
	{   
		b = x;
		while(quo!=0)
		{   
			quo = b / 10;
			b = quo;
			count += 1; 
		}
	}
	count = count - 1;
	for (i=1; i<count; i++)
	{
		temp *= 10;
	}
	j = temp;
	for (; count>0; count--)
	{
		out = x / j;
		x = x - out * j;
		j = j /10;
		printf("%d\n", out);
	}


	return 0;
}