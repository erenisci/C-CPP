#include <stdio.h>

void insertionSort(int arr[], int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(void)
{
    int arr[] = {8, 7, 2, 1, 0, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]), i;

    printf("Before insertionSort: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAfter insertionSort: ");
    insertionSort(arr, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}