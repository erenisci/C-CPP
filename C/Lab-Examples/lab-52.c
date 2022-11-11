#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char a1[30];
    char a2[30];
    printf("Enter a sentence: ");
    gets(a1);
    int indis = strlen(a1) - 1;

    for (int i = 0; i < strlen(a1); i++)
    {
        a2[indis] = a1[i];
        indis--;
    }

    if (strncmp(a2, a1, strlen(a1)) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}