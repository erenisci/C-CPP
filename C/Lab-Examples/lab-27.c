#include <stdio.h>

int main(void)
{
    int i, nums1[] = {3, 6, 9, 12, 15};

    for (i = 0; i < 5; i++)
    {
        printf("%d. element of array named nums1 = %d\n", i + 1, nums1[i]);
    }
    printf("%d\n", nums1[0]);
    printf("%d\n", nums1[1]);
    printf("%d\n", nums1[2]);
    printf("%d\n", nums1[3]);
    printf("%d\n", nums1[4]);

    float nums2[7] = {};
    for (i = 0; i < 7; i++)
    {
        printf("%f ", nums2[i]);
    }
    printf("\n");

    for (i = 0; i < 7; i++)
    {
        printf("Enter the %d. element: ", i + 1);
        scanf("%f", &nums2[i]);
    }

    for (i = 0; i < 7; i++)
    {
        printf("%.2f - ", nums2[i]);
        if (i == 6)
            printf("%.2f", nums2[i]);
    }

    return 0;
}
