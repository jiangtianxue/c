# include <stdio.h>

int main()
{
    int price;
    // const 意味着AMOUNT是不可以修改的
    const int AMOUNT = 100;
    printf("请输入金额：");
    scanf("%d", &price);

    int change = AMOUNT - price;
    printf("找零：%d \n", change);

    return 0;
}