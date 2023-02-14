// Linked List - Functions and Loops
#include <stdio.h>
#include <stdlib.h>

struct n
{
    double x;
    n *next;
};
typedef n node;

int main(void)
{
    node *root;
    root = (node *)malloc(sizeof(node));
    root->x = 2.06;
    root->next = NULL;

    node *iter;
    iter = root;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        iter->next = (node *)malloc(sizeof(node));
        iter = iter->next;
        iter->x = root->x * (i + 2);
        iter->next = NULL;
    }

    iter = root;
    while (iter != NULL)
    {
        printf("%.2f ", iter->x);
        iter = iter->next;
    }

    return 0;
}