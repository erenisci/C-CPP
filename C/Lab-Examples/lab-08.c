#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("b - a = %d\n", b - a);
    printf("a * b = %d\n", a * b);
    printf("a / b = %f\n", (float)a / (float)b);
    printf("b / a = %f", (float)b / (float)a);

    return 0;
}