#include <stdio.h>

int main(void)
{
    char name[4] = {'d', 'a', 'n', '\0'};
    for (int i = 0; i < 6; i++)
    {
        printf("%d. element = %c\n", i + 1, name[i]);
        if (name[i] == '\0')
            printf("Our array is complete\n");
    }
    printf("%s\n", name);

    char teamName[] = {'B', 'a', 'r', 'c', 'a', '\0'};
    for (int i = 0; i < 6; i++)
    {
        printf("%c ", teamName[i]);
    }
    printf("\n%s", teamName);

    char country[7];
    printf("\nEnter a country with 6 characters:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &country[i]);
    }
    printf("%s", country);

    return 0;
}