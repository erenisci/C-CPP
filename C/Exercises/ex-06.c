#include <stdio.h>

int main(void)
{
    int count = 1;

    for (int i = 1; i < 14; i++)
    {
        if (i < 7)
        {
            for (int k = 0; k < i; k++)
            {
                if (count % 3 != 0)
                {
                    printf("**");
                }
            }
            printf("\n");
        }

        else
        {
            for (int j = 0; j < 14 - i; j++)
            {
                if (count % 3 != 0)
                {
                    printf("**");
                }
            }
            printf("\n");
        }
        count++;
    }

    return 0;
}