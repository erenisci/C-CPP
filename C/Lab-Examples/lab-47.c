#include <stdio.h>

int sixParameterFunc(int *a1, int *a2, int *sum, int *product, int *substraction, float *division)
{
    *sum = *a1 + *a2;
    *product = *a1 * *a2;
    *substraction = *a1 - *a2;
    *division = (float)*a1 / (float)*a2;
}

int main(void)
{
    int a1, a2;
    int sum, product, substraction;
    int *p0 = &a1, *p1 = &a2;
    float division;

    printf("A1: ");
    scanf("%d", p0);
    printf("A2: ");
    scanf("%d", p1);

    sixParameterFunc(&a1, &a2, &sum, &product, &substraction, &division);
    printf("Addition = %d\n", sum);
    printf("Substraction = %d\n", substraction);
    printf("Product = %d\n", product);
    printf("Division = %f", division);

    return 0;
}