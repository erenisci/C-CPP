// Linked List - Functions and Loops
#include <stdio.h>
#include <stdlib.h>

struct n
{
    double x;
    n *next;
};
typedef n node;

void add(node *r, double x)
{
    while (r->next != NULL)
    {
        r = r->next;
    }
    r->next = (node *)malloc(sizeof(node));
    r->next->x = x;
    r->next->next = NULL;
}

void info(node *r)
{
    while (r != NULL)
    {
        printf("%.2f ", r->x);
        r = r->next;
    }
}

int main(void)
{
    node *root;
    root = (node *)malloc(sizeof(node));
    root->x = 2.06;
    root->next = NULL;

    int i = 0;
    for (i = 0; i < 4; i++)
    {
        add(root, root->x * (i + 2));
    }

    info(root);

    return 0;
}