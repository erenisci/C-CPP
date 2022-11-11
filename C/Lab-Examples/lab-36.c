#include <stdio.h>

int main(void)
{
    int a;
    int *p;
    p = &a;

    printf("Enter an integer: ");
    scanf("%d", p);

    printf("a = %d\n", a);
    printf("p = %x\n", p);
    printf("p = %d", *p);

    return 0;
}