#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i;
    char buff[100];

    printf("Enter a sentence: ");
    gets(buff);
    printf("\"");

    for (i = 0; i < strlen(buff); i++)
    {
        if (buff[i] == ' ')
        {
            printf("\", \"");
        }
        else
        {
            printf("%c", buff[i]);
        }
    }
    printf("\"");

    return 0;
}