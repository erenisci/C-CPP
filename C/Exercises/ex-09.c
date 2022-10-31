#include <stdio.h>

int main(void)
{
    int x;
    for (x = 1; x <= 14; x++)
    {
        if (x < 7)
        {
            int k = 0;
            for (k = 0; k < x; k++)
            {
                printf("*");
            }

            printf("\n");
        }

        else
        {
            int k = 0;
            for (k = 0; k < 14 - x; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}