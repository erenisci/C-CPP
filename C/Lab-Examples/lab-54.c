#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strnComp(char *s1, char *s2, int sizeS);

int main(void)
{
    char str1[100], str2[100];
    int n, result;

    printf("Enter the first sentence: ");
    gets(str1);
    printf("Enter the second sentence: ");
    gets(str2);
    printf("Enter how many characters to compare: ");
    scanf("%d", &n);

    result = strnComp(str1, str2, n);

    if (result == 0)
        printf("%s = %s, result = %d", str1, str2, result);
    else if (result > 0)
        printf("%s > %s, result = %d", str1, str2, result);
    else
        printf("%s < %s, result = %d", str1, str2, result);

    return 0;
}

int strnComp(char *s1, char *s2, int sizeS)
{
    while (sizeS > 0)
    {
        if (*s1 != *s2)
        {
            return *s1 > *s2 ? 1 : -1;
        }
        sizeS--;
        *s1++;
        *s2++;
    }

    return 0;
}