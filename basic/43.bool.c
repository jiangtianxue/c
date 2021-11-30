#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b = 6>5;
    bool t = true;
    
    // 不是true或者false，实质上还是整数
    printf("%d\n", b);

    return 0;

}