#include <stdio.h>

int main()
{
	printf("请分别输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸： \n");

	int foot;
	float inch;

	scanf("%d %f", &foot, &inch);

	printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));


	double age = 12.1324;

	printf("his age is %f 岁 \n", age);
	
	return 0;
}