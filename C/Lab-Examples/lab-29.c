#include <stdio.h>

int main(void)
{
    char studentName[10] = {"Eren ISCI"};
    for (int i = 0; i < 9; i++)
    {
        printf("%c", studentName[i]);
    }
    printf("\n");

    char students[5][255] = {"Eren", "Sude", "Ercan", "Elif", "Selin"};
    for (int i = 0; i < 5; i++)
    {
        printf("%s ", students[i]);
    }

    return 0;
}