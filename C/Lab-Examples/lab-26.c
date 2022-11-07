#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            continue;
        else if (i == 5)
            printf("%d", i);
        else
            break;
    }

    return 0;
}