#include <stdio.h>

int main(void)
{
    int nums[5] = {15, 4, 2022, 16, 34};
    int *pointer;
    pointer = &nums[0];

    printf("Nums[0] = %d\n", *pointer);
    printf("Nums[1] = %d\n", *(pointer + 1));
    printf("Nums[2] = %d\n", *(pointer + 2));
    printf("Nums[3] = %d\n", *(pointer + 3));
    printf("Nums[4] = %d\n", *(pointer + 4));

    return 0;
}