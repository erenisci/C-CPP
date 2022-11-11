#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[50];
    printf("Enter a sentence: ");
    gets(name);

    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", toupper(name[i])); // tolower(name[i]))
    }

    return 0;
}