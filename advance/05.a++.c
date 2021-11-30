#include <stdio.h>
int main(int argc, char **argv){
    int a = 100;
    int b = a++;
    // printf("%d\n", a);
    // printf("%d\n", b);
    // printf("%d\n", a);
    // printf("%d\n", a);

    printf("%d\n", a++);
    printf("%d\n", a++);
    printf("%d\n", a);
    printf("%d\n", ++a);
    // printf("%d, %d, %d, %d\n", a++, a++, a, ++a);

    // printf("%d, %d, %d\n", a, a, a++);
    printf("%d\n", a);

    int i = 1;
    // printf("%d\n", ++i);
    printf("%d\n", i++);

    int c = 1;
    printf("%d, %d, %d\n", c++, ++c, c);
    // printf("%d, %d, %d\n", c, ++c, c++);
    
    

}