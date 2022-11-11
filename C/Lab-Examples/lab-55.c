#include <stdio.h>
#include <string.h>

typedef struct
{
    int lessonCode;
    char lessonName[30];
    int lessonClass;
    int classSize;
} lesson;

int main(void)
{
    lesson lesson1, lesson2;

    printf("Enter the code of the lesson: ");
    scanf("%d", &lesson1.lessonCode);
    printf("Enter the name of the lesson: ");
    scanf("%s", lesson1.lessonName);
    printf("Enter the class of the lesson: ");
    scanf("%d", &lesson1.lessonClass);
    printf("Enter the size of the class: ");
    scanf("%d", &lesson1.classSize);
    printf("\n");

    printf("Lesson code: %d\n", lesson1.lessonCode);
    printf("Lesson name: %s\n", lesson1.lessonName);
    printf("Class of the lesson: %d\n", lesson1.lessonClass);
    printf("Size of the class: %d\n\n", lesson1.classSize);

    lesson2.lessonCode = lesson1.lessonCode * 2;
    lesson2.lessonClass = lesson1.lessonClass * 2;
    lesson2.classSize = lesson1.classSize * 2;
    printf("Lesson name: %s\n", lesson2.lessonName);
    strcpy(lesson2.lessonName, lesson1.lessonName);

    printf("Lesson code: %d\n", lesson2.lessonCode);
    printf("Lesson name: %s\n", lesson2.lessonName);
    printf("Class of the lesson: %d\n", lesson2.lessonClass);
    printf("Size of the class: %d\n", lesson2.classSize);

    return 0;
}