#include <stdio.h>
#include <math.h>

int main(void)
{
    double i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%1.f power of %1.f: %1.f\n", i, j, pow(i, j));
        }
    }

    return 0;
}