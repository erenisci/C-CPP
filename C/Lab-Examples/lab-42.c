#include <stdio.h>

int main(void)
{
    int num;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("Enter a num: ");
    scanf("%d", &num);
    printf("num = %d\n\n", num);

    printf("Enter a ptr1: ");
    scanf("%d", ptr1);
    printf("ptr1 = %d\n\n", *ptr1);

    printf("Enter a ptr2: ");
    scanf("%d", *ptr2);
    printf("ptr2 = %d\n\n", **ptr2);

    printf("num = %x\n", &num);
    printf("ptr1 = %x\n", ptr1);
    printf("ptr2 = %x\n\n", *ptr2);

    printf("num = %d\n", num);
    printf("ptr1 = %d\n", *ptr1);
    printf("ptr2 = %d", **ptr2);

    return 0;
}