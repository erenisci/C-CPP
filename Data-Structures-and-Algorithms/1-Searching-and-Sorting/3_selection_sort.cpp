#include <stdio.h>

void selectionSort(int arr[], int size)
{
    int i, j, temp, min_idx;
    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(void)
{
    int arr[] = {8, 7, 2, 1, 0, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]), i;

    printf("Before selectionSort: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAfter selectionSort: ");
    selectionSort(arr, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}