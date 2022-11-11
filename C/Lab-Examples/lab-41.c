#include <stdio.h>

void powNum(int *num, int product)
{
    int i, temp = 1;
    for (i = 0; i < product; i++)
    {
        temp *= *num;
    }
    *num = temp;
}

int main(void)
{
    int num, product;

    printf("Enter two integers: ");
    scanf("%d %d", &num, &product);

    powNum(&num, product);
    printf("num = %d", num);

    return 0;
}