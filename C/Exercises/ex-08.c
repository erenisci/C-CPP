#include <stdio.h>

// midterm question
int main(void)
{
    for (int i = 1; i <= 9; i++)
    {
        if (i % 2 == 0)
        {
            for (int k = 0; k < i; k++)
            {
                printf("**");
            }
        }
        else if (i % 2 != 0 && i % 3 == 0)
        {
            for (int j = 0; j < i; j++)
            {
                printf("***");
            }
        }
        else
        {
            for (int m = 0; m < i; m++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}