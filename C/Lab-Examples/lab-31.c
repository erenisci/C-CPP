#include <stdio.h>

int main(void)
{
    int a, arr[a], id;

    printf("Enter the length of array: ");
    scanf("%d", &a);

    for (id = 0; id < a; id++)
        arr[id] = id * 5;

    for (id = 0; id < a; id++)
        printf("%d ", arr[id]);

    return 0;
}