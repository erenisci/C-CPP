#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("A and B are equal");
    else
        printf("A and B are not equal");

    return 0;
}
