#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if ((a + b) % 3 == 0)
    {
        if (a > b)
            sum = a - b;
        else
            sum = b - a;
    }

    else if ((a + b) % 3 == 1)
    {
        if (a > b)
            sum = a - b;
        else
            sum = b - a;
    }

    else if ((a + b) % 3 == 2)
    {
        if (a > b)
            sum = a * 2;
        else
            sum = b * 2;
    }
    printf("Sum = %d", sum);

    return 0;
}
