#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char a1[30];
    printf("Enter a sentence:");
    gets(a1);

    printf("\"");
    for (int i = 0; i < strlen(a1); i++)
    {
        if (a1[i] == ' ')
        {
            printf("\"\n\"");
        }
        else
        {
            printf("%c", a1[i]);
        }
    }
    printf("\"");

    return 0;
}