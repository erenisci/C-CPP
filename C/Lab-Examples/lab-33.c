#include <stdio.h>

void printSomething()
{
    printf("This is a function!\n");
}

int returnSum(int a, int b)
{
    return a + b;
}

int funcInFunc(int a, int b)
{
    return returnSum(a, b) + returnSum(a, b);
}

int fibonacci(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
    {
        int sum = 0;
        for (int i = a - 2; i < a; i++)
        {
            sum += fibonacci(i);
        }
        return sum;
    }
}

int main(void)
{
    int a = 5, b = 11;

    printSomething();
    printf("%d\n", returnSum(a, b));
    printf("%d\n", funcInFunc(a, b));
    printf("F(10) = %d", fibonacci(10));

    return 0;
}