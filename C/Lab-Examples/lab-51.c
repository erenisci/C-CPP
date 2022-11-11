#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char a1[30];
    char a2[30];
    printf("Enter a sentence: ");
    gets(a1);
    int ind = strlen(a1) - 1;

    for (int i = 0; i < strlen(a1); i++)
    {
        a2[ind] = a1[i];
        ind--;
    }
    printf("%s", a2);

    return 0;
}