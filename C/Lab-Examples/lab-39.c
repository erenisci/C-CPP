#include <stdio.h>

void twoTimes(int *a)
{
    (*a) *= 2;
}

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    twoTimes(&num);
    printf("num: %d", num);

    return 0;
}