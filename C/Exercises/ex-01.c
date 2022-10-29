#include <stdio.h>
#include <string.h>

void turnover(char *s1, char *s2, int sizeOf1)
{
    int i;
    for (i = 0; i < sizeOf1; i++)
    {
        s2[i] = s1[sizeOf1 - (i + 1)];
    }
}

int main(void)
{
    int sizeOf1, result;
    char buff1[50];
    char buff2[50];

    printf("Enter a word: ");
    scanf("%s", buff1);
    sizeOf1 = strlen(buff1);
    turnover(buff1, buff2, sizeOf1);
    result = strncmp(buff1, buff2, sizeOf1);

    if (result == 0)
    {
        printf("Word(%s) is a palindrome!", buff1);
    }
    else
    {
        printf("Word(%s) is not a palindrome!", buff1);
    }

    return 0;
}