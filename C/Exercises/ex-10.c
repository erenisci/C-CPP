#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sumFunc(int array[]);
int n, sum = 0, result;

int main(void)
{
    int d;
    printf("How many index you want to create: ");
    scanf("%d", &n);

    int array[n];
    srand(time(NULL));

    for (int a = 0; a < n; a++)
    {

        d = rand() % 50 + 1;
        array[a] = d;
        printf("%d. value = %d \n", a + 1, d);
    }
    result = sumFunc(array);
    printf("Result: %d ", result);

    return 0;
}

int sumFunc(int array[])
{
    for (int i = 0; i < n; i++)
    {

        sum += array[i];
    }

    return sum;
}