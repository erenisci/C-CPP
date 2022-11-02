#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 11 == 0) && (num % 5 == 0))
        printf("It is an OSTIM number!");
    else
        printf("It is not an OSTIM number!");

    return 0;
}
