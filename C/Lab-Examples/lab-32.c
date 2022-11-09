#include <stdio.h>

int main(void)
{
    int arr[2][4], i, j;

    printf("Enter the elements of the 2D array: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}