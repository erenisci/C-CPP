#include <stdio.h>

int main(void)
{
    int starNum, spaceNum, size;

    printf("Enter the size: ");
    scanf("%d", &size);

    if (size % 2 != 0)
    {
        size++;
    }

    starNum = 1;
    spaceNum = (size / 2) + 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < spaceNum; j++)
        {
            printf(" ");
        }

        for (int m = 0; m < starNum; m++)
        {
            printf("*");
        }

        if (i % 2 == 0)
        {
            starNum += 4;
            spaceNum -= 2;
        }

        else
        {
            starNum -= 2;
            spaceNum++;
        }

        printf("\n");
    }

    return 0;
}