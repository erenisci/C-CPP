#include <stdio.h>

int main(void)
{
    int num = 26;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("num = %d\n", num);

    *ptr1 += 2;
    printf("num = %d\n", num);

    **ptr2 += 3;
    printf("num = %d", num);

    return 0;
}