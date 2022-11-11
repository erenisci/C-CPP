#include <stdio.h>

int main(void)
{
    int a;
    int *p;

    a = 3;
    printf("a = %d\n", a);
    printf("&a = %x\n\n", &a);

    p = &a;
    printf("p = %x\n", p);
    printf("*p = %d\n\n", *p);

    a = 5;
    printf("p = %x\n", p);
    printf("*p = %d\n\n", *p);

    *p = 10;
    printf("a = %d\n", a);
    printf("&a = %x", &a);

    return 0;
}