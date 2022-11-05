#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (a >= 0)
    {
        printf("%d\n", a);
        a--;
    }

    return 0;
}