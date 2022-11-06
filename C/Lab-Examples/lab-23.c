#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    do
    {
        printf("%d\n", a);
        a--;
    } while (a >= 0);

    return 0;
}