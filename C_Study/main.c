#include <stdio.h>

int main(void)
{
    int i = 10;
    char c = 69;
    double f = 12.3;
    
    printf("i의 주소: %p\n", (void *)&i);
    printf("c의 주소: %p\n", (void *)&c);
    printf("c의 주소: %p\n", (void *)&f);
    
    return 0;
}
