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
        if (name[i] >= 'a' && name[i] <= 'z')
            printf("%c", name[i]);
    }

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
            printf("%c", name[i]);
    }

    return 0;
}