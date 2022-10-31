#include <stdio.h>

int main(void)
{
    int value, spaceNum, starNum, count = 0;

    printf("Enter a value: ");
    scanf("%d", &value);

    for (int m = 0; m < value; m++)
    {
        spaceNum = 0;
        starNum = 6;

        for (int i = 0; i < 4; i++)
        {
            if (i != 3)
            {
                for (int t = 0; t < count; t++)
                    printf(" ");
            }

            if (i != 3)
            {
                for (int j = 0; j < spaceNum; j++)
                    printf(" ");

                for (int k = 0; k < starNum; k++)
                    printf("*");

                if (i == 0)
                {
                    starNum -= 5;
                    spaceNum += 5;
                }
                printf("\n");
            }
            else
                count += 5;
        }
    }

    return 0;
}