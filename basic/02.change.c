#include <stdio.h>

int main()
{
	int amount = 100;
	int price = 0;
	int change;

	printf("请输入金额： ");
	scanf("%d", &price);

	printf("请输入票面： ");
	scanf("%d", &amount);

	change = amount - price;
	printf("找您%d元。\n", change);

	return 0;
}