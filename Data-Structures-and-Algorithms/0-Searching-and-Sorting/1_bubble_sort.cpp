#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[] = {8, 7, 2, 1, 0, 9, 6};
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