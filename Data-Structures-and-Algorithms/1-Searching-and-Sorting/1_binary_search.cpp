#include <stdio.h>

int binarySearch(int arr[], int key, int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void)
{
    int arr[9] = {2, 21, 31, 55, 72, 86, 92, 99, 102};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 102;
    int result = binarySearch(arr, x, 0, n - 1);

    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);

    return 0;
}