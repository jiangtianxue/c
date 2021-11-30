#include <stdio.h>

int main(int argc, char const *argv[])
{
	int type;
	printf("请输入一个数字，1或者2：");
	scanf("%d", &type);
	switch (type)
	{
		case 1:
			printf("hello!\n");
			break;
		case 2:
			printf("good morning\n");
			break;
		default:
			printf("good afternoon!\n");
			break;
	}
	return 0;
}