#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct qHead
{
    int count = 0;
    node *front;
    node *rear;
};

void createQueue(struct qHead *q);
void insert(struct qHead *q, int val);
void deleteElement(struct qHead *q);
void display(struct qHead *q);
void peek(struct qHead *q);

int main()
{
    int option, val;
    struct qHead *q = (struct qHead *)malloc(sizeof(struct qHead));
    createQueue(q);
    do
    {
        printf("\n *****MAIN MENU*****");
        printf("\n 0. COUNT");
        printf("\n 1. INSERT");
        printf("\n 2. DELETE");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            printf("\n Count = %d \n", q->count);
            break;
        case 1:
            printf("\n Enter the number to insert in the queue: ");
            scanf("%d", &val);
            insert(q, val);
            break;
        case 2:
            deleteElement(q);
            break;
        case 3:
            peek(q);
            break;
        case 4:
            display(q);
            break;
        }

    } while (option != 5);
    return 0;
}

void createQueue(struct qHead *q)
{
    q->count = 0;
    q->rear = NULL;
    q->front = NULL;
}

void insert(struct qHead *q, int val)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (q->count == 0)
    {
        q->front = newNode;
        q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->count += 1;
}

void deleteElement(struct qHead *q)
{
    if (q->count = 0)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        struct node *temp;
        temp = q->front;
        q->front = q->front->next;
        printf("\n The value being deleted is : %d\n", temp->data);
        q->count -= 1;
        free(temp);
    }
}

void display(struct qHead *q)
{
    if (q->count == 0)
        printf("\nQueue is empty!\n");
    else
    {
        struct node *current;
        current = q->front;
        printf("\n");
        while (current != q->rear)
        {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("%d\t\n", current->data);
    }
}

void peek(struct qHead *q)
{
    if (q->count == 0)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        printf("The value at front of queue is: %d\n", q->front->data);
    }
}
