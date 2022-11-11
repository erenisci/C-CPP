#include <stdio.h>

int main(void)
{
    int nums[5] = {1, 2, 3, 4, 5};
    int *ptr[5];
    int *ptrNo[5];

    ptr[0] = &nums[0];
    ptr[1] = &nums[1];
    ptr[2] = &nums[2];
    ptr[3] = &nums[3];
    ptr[4] = &nums[4];

    ptrNo[0] = &nums[0];

    printf("ptr[0] = %x\n", ptr[0]);
    printf("*ptr[0] = %d\n\n", *ptr[0]);
    printf("ptr[1] = %x\n", ptr[1]);
    printf("*ptr[1] = %d\n\n", *ptr[1]);

    printf("ptrNo[0] = %d\nptrNo[1] = %d", *ptrNo[0], *ptrNo[0] + 1);

    return 0;
}