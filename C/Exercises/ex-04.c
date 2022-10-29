#include <stdio.h>

int main(void)
{
    int i, j, spaceNum, starSize, size;

    printf("Enter the size: ");
    scanf("%d", &size);

    if (size % 2 == 0)
        size += 1;

    spaceNum = size / 2;
    starSize = 1;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < spaceNum; j++)
            printf(" ");

        for (j = 0; j < starSize; j++)
            printf("*");

        if (i < size / 2)
        {
            spaceNum--;
            starSize += 2;
        }
        else
        {
            spaceNum++;
            starSize -= 2;
        }
        printf("\n");
    }

    return 0;
}