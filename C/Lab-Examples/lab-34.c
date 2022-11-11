#include <stdio.h>

int main(void)
{
    int a = 3;
    int *p = NULL;
    p = &a;

    printf("a = %d\n", a);
    printf("p = %x\n", p);
    printf("p = %d\n", p);
    printf("p = %d", *p);

    return 0;
}