#include <stdio.h>

typedef struct
{
    int studentID;
    int class;
    char country[30];
    int birthday;
    float average;
} student;

void writeInfo(student std)
{
    printf("Student's ID: %d\n", std.studentID);
    printf("Student's Class: %d\n", std.class);
    printf("Student's Country: %s\n", std.country);
    printf("Student's Birthday: %d\n", std.birthday);
    printf("Student's Average: %.2f\n", std.average);
}

void giveInfo(student *std)
{
    printf("Student ID: ");
    scanf("%d", &std->studentID);

    printf("Student class: ");
    scanf("%d", &std->class);
    if (std->class > 4 || std->class < 1)
    {
        printf("Enter a class between 1-4: ");
        scanf("%d", &std->class);
    }

    printf("Student country: ");
    scanf("%s", std->country);

    printf("Student birthday: ");
    scanf("%d", &std->birthday);
    if (std->birthday < 1990 || std->birthday > 2010)
    {
        printf("Enter a birthday between 1990-2010: ");
        scanf("%d", &std->birthday);
    }

    printf("Student average: ");
    scanf("%f", &std->average);
    if (std->average < 0 || std->average > 100)
    {
        printf("Enter an average between 0-100: ");
        scanf("%f", &std->average);
    }
}

int main(void)
{
    student std;

    giveInfo(&std);
    printf("\n\n");
    writeInfo(std);

    return 0;
}