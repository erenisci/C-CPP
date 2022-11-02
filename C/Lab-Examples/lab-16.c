#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter student grade: ");
    scanf("%d", &grade);

    if (grade >= 90)
        printf("AA");
    else if (grade >= 85)
        printf("BA");
    else if (grade >= 80)
        printf("BB");
    else if (grade >= 70)
        printf("CB");
    else if (grade >= 60)
        printf("CC");
    else if (grade >= 50)
        printf("DC");
    else if (grade >= 45)
        printf("DD");
    else if (grade >= 35)
        printf("FD");
    else if (grade >= 0)
        printf("FF");
    else
        printf("You entered incorrect data!");
    printf("\n");

    if (grade >= 60)
        printf("Passed");
    else if (grade >= 45)
        printf("Conditional Passed");
    else
        printf("Failed!");

    return 0;
}