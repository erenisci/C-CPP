#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int age;
    struct node *next;
} *top, *newNode, *temp, *current;

int main(void)
{
    int num;
    char answer = 'n';
    unsigned int choice;

    printf("1-) Create Stack\n2-) push()\n3-) pop()\n4-) Print values\n5-) peak()\nWhat's your choice: ");
    scanf("%u", &choice);

    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            top = NULL;
            printf("\nEmpty stack created!\n");
            break;
        case 2:
            printf("\nTOP value's address %d, the memory address it points to = %d\n", &top, top);
            printf("\nEnter age information, 0 to end: ");
            scanf("%d", &num);

            while (num != 0)
            {
                newNode = (struct node *)malloc(sizeof(struct node));
                newNode->age = num;
                newNode->next = top;
                top = newNode;
                printf("Address information where the value %d is written %d, TOP value's address %d \n", newNode->age, newNode, top);
                printf("\nEnter age information, 0 to end: ");
                scanf("%d", &num);
            }
            break;

        case 3:
            printf("\nAttention first node will be deleted, if yes press e/E button: ");
            answer = getch();

            if (answer == 'e' || answer == 'E')
            {
                temp = top;
                top = top->next;
                free(temp);
                printf("\n");
            }
            else
                printf("\nDeletion canceled!\n");
            break;

        case 4:
            if (top == NULL)
                printf("\nNo entries in the list!");
            else
            {
                current = top;
                printf("\n");
                while (current != NULL)
                {
                    printf("Data at address %d = %d,\t        NEXT-> ADDRESS %d\n", current, current->age, current->next);
                    current = current->next;
                }
            }
            break;

        case 5:
            if (top == NULL)
            {
                printf("\nNo entries in the list!");
            }
            else
                printf("\nTOP Value = %d\n", top->age);
            break;

        default:
            puts("\nInvalid Choice!\n");
            break;
        }

        printf("\n");
        printf("1-) Create Stack\n2-) push()\n3-) pop()\n4-) Print values\n5-) peak()\nWhat's your choice: ");
        scanf("%u", &choice);
    }
    puts("End");

    return 0;
}
