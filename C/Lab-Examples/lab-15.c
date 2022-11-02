#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%s\n", number >= 60 ? "Passed" : "Failed");

    return 0;
}
