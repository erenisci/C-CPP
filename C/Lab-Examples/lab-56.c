#include <stdio.h>
#include <string.h>

typedef struct
{
    int day, month, year;
    char weekDay[30];
} date;

int main(void)
{
    date today;
    today.day = 17;
    today.month = 4;
    today.year = 2022;
    strcpy(today.weekDay, "Sunday");

    printf("Day / Month / Year: %d / %d / %d\n", today.day, today.month, today.year);
    printf("Day: %s", today.weekDay);

    return 0;
}