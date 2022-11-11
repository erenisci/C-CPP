#include <stdio.h>

int main(void)
{
    int a = 3, b = 1;
    int *p, *q;
    p = &a, q = &b;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("p = %d\n", p);
    printf("q = %d\n\n", q);

    printf("p = %x\n", p);
    printf("q = %x\n\n", q);

    printf("*p = %d\n", *p);
    printf("*q = %d", *q);

    return 0;
}