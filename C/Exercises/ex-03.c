#include <stdio.h>

int main(void)
{
    int entry, i, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &entry);

    for (i = 2; i <= entry / 2; i++)
    {
        if (entry % i == 0)
        {
            temp = 1;
            break;
        }
    }
    if (entry == 1)
    {
        printf("1 is not a prime number");
    }
    else
    {
        if (temp == 0)
            printf("The number entered is a prime number");
        else
            printf("The number entered is not prime number");
    }

    return 0;
}