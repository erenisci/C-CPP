#include <stdio.h>

int main(void)
{
    int a = 5;
    int *p, *q;
    p = &a, q = &a;

    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    a = 6;
    printf("*p = %d\n", *p);
    printf("*q = %d", *q);

    return 0;
}