#include <stdio.h>

int main(void)
{
    float pi = 3.14159, r;

    printf("Radius of the circle: ");
    scanf("%f", &r);
    printf("%f", pi * r);

    return 0;
}