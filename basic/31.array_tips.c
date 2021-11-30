#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("二维数组的行和列都是从0开始的。\n");
	printf("a[i,j]中逗号是逗号表达式，表示a[j].\n");
	printf("数组定义时，行数可以省略，列数不可以省略。\n");
	printf("sizeof给出的是整个数组所占据的内容大小，单位是字节，\n");
	printf("sizeof(a[0])给出数组中单个元素的大小，于是相除就得到数组的单元个数。这样代码很有用。\n");
	printf("不可以直接用一个数组赋值给另一个数组。\n");
	return 0;
}