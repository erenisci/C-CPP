#include <stdio.h>

void productNums(int *num, int product)
{
    *num = *num * product;
    product = *num * product;
}

int main(void)
{
    int num, product;

    printf("Enter two integers: ");
    scanf("%d %d", &num, &product);

    productNums(&num, product);
    printf("num = %d\n", num);
    printf("product = %d", product);

    return 0;
}