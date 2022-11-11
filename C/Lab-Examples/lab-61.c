#include <stdio.h>
#include <string.h>

typedef struct
{
    int day, month, year;
    char event[30];
} date;

int main(void)
{
    date dates[3];
    FILE *fp = fopen("Date-Event.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter a date (Day / Month / Year): ");
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
        fprintf(fp, "Date: %d/%d/%d, ", dates[i].day, dates[i].month, dates[i].year);

        printf("Enter an event: ");
        scanf("%s", dates[i].event);
        fprintf(fp, "Event: %s", dates[i].event);
        if (i != 3 - 1)
            fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}