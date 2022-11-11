#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("Date-Event.txt", "r");
    char dayMonthYear[12];
    char date[10], event[10], event1[30];
    if (fopen("Date-Event.txt", "r") == NULL)
    {
        printf("There is no such a file!");
    }
    else
    {
        while (!feof(fp))
        {
            fscanf(fp, "%s %s %s %s", date, dayMonthYear, event1, event);
            printf("%s %s %s %s\n", date, dayMonthYear, event1, event);
        }
        fclose(fp);
    }
    return 0;
}