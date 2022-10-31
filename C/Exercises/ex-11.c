#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numberOfDigit(int num)
{
    int numberDigit = 0;

    if (num >= 0)
    {
        do
        {
            numberDigit++;
            num = num / 10;
        } while (num > 0);
    }
    return numberDigit;
}

int turnoverNum(int num)
{
    int numberDigit = numberOfDigit(num);
    int arr[numberDigit];
    int numberDigt = 0;

    do
    {
        numberDigt++;
        arr[numberDigt - 1] = num % 10;
        num = num / 10;
    } while (num > 0);

    int turnoverNum = 0;

    for (int i = 0; i < numberDigit; i++)
    {
        turnoverNum = turnoverNum + arr[i] * pow(10, numberDigit - 1 - i);
    }

    return turnoverNum;
}

int main(void)
{
    int num;

    printf("Enter a number that does not end with 0: ");
    scanf("%d", &num);
    printf("turnoverNum: %d\n", turnoverNum(num));
    printf("numberOfDigit: %d", numberOfDigit(num));

    return 0;
}