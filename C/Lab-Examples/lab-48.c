#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int number = 0, character = 0;
    char name[30];
    printf("Enter something: ");
    scanf("%s", name);

    for (int i = 0; i < strlen(name); i++)
    {
        if (isdigit(name[i]) == 1)
            number++;
        else
            character++;
    }
    printf("The word has %d number and %d characters.", number, character);

    return 0;
}