#include <stdio.h>

int main(void)
{
    int wage;

    printf("Earned wage: ");
    scanf("%d", &wage);

    (wage <= 101) ? printf("Loss") : printf("Gain");

    return 0;
}
