#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *str = "hello";                    //将一个字符串输入给一个指针变量
	char *str2 = "hello";
	char word[] = "hello";					//将一个字符串输入给一个数组
	char linr[10] = "hello";

	printf("str=%p\n", &str);
	printf("str2=%p\n", &str2);
//	str[0]="b";
	printf("str[0]= %c\n", str[0]);
	return 0;
}