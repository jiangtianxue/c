#include <stdio.h>
 int main()
 {
     char c = -1;
     int i = -1;

    // 当传入到printf函数的时候，都是变成了int的4字节形式
     printf("c=%u, i=%u\n", c, i);
     return 0;
 }