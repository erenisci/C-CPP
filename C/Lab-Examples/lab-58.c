#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum
{
    Positive = 1,
    Negative = 0,
    NoInfo = -1
} corona;

int main(void)
{
    char resutlTest[20];

    printf("Enter the result of the test: ");
    scanf("%s", resutlTest);

    if (strcmp(resutlTest, "Positive") == 0)
        corona = Positive;
    else if (strcmp(resutlTest, "Negative") == 0)
        corona = Negative;
    else if (strcmp(resutlTest, "NoInfo") == 0)
        corona = NoInfo;
    else
        printf("Enter valid number!");

    printf("Result = %d", corona);

    return 0;
}