#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
    char class[30];
    int studentNo;
    int notes[4];

} Student;

void addStudent(Student std[])
{
    printf("Enter a name: ");
    scanf("%s", std->name);

    printf("Enter a class: ");
    scanf("%s", std->class);

    printf("Enter a student number: ");
    scanf("%d", &std->studentNo);

    printf("Enter student notes: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &std->notes[i]);
    }
}

void studentInfo(Student std[])
{

    printf("Student name: %s\n", std->name);
    printf("Student class: %s\n", std->class);
    printf("Student number: %d\n", std->studentNo);
    for (int i = 0; i < 4; i++)
    {
        printf("Student notes: %d\n", std->notes[i]);
    }
}

int main(void)
{
    Student std[2];

    for (int i = 0; i < 2; i++)
    {
        addStudent(std + i);
        printf("\n\n");
    }
    printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        studentInfo(std + i);
        printf("\n\n");
    }

    return 0;
}