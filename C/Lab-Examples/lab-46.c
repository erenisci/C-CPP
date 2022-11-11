#include <stdio.h>

int method(int nums[])
{
    int sum;

    for (int i = 0; i < 6; i++)
    {
        sum += *nums + i;
    }

    return sum;
}

int main(void)
{
    int nums[6] = {1, 2, 3, 4, 5, 6};

    printf("Sum of nums = %d", method(nums));

    return 0;
}