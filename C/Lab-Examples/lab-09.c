#include <stdio.h>

int main(void)
{
    float x, y, z, result;

    printf("Enter 3 floats: ");
    scanf("%f %f %f", &x, &y, &z);
    result = x * y * z;
    printf("Result = %f\n", result);

    return 0;
}
