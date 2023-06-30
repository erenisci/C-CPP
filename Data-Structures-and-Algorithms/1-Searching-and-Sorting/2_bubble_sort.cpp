#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    int res = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                res += 2;
            }
        }
    }
    printf("%d", res);
}

int main(void)
{
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]), i;

    printf("Before bubbleSort: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAfter bubbleSort: ");
    bubbleSort(arr, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}