#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
        printf("%d\n", i);

    return 0;
}