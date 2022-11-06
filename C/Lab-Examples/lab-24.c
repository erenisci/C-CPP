#include <stdio.h>

int main(void)
{
    int col = 5, j;

    for (int i = 0; i < col; i++)
    {
        j = i;
        while (j < col - 1)
        {
            printf(" ");
            j++;
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}