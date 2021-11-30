#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int size = 3;
	int board[size][size];
	int numfX;
	int numfO;
	int i, j;
	int result = -1;
	for (i=0; i<size; i++)
		for (j=0; j<size; j++)
		{
			if (board[i][j] == 1)
			{
				numfX ++;
			}
			else
			{
				numfO ++;
			}
			if (numfO == size)
			{
				result = 0;
			}
			else if (numfX == size)
			{
				result = 1;
			}
		}
	return 0;
}