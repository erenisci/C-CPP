#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int randomNum, lotto[49] = {0};
    srand(time(NULL));

    printf("Creating the numbers:\n");
    for (int i = 0; i < 49; i++)
    {
        randomNum = 1 + rand() % 49;

        while (lotto[randomNum - 1] == 1)
            randomNum = 1 + rand() % 49;

        lotto[randomNum - 1] = 1;
        printf("%d ", randomNum);
    }

    return 0;
}