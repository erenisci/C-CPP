// Linked List
#include <stdio.h>
#include <stdlib.h>

struct n
{
    int x;
    n *next;
};
typedef n node;

int main(void)
{
    node *root;

    root = (node *)malloc(sizeof(node));
    root->x = 10;
    root->next = (node *)malloc(sizeof(node));
    root->next->x = 20;
    root->next->next = (node *)malloc(sizeof(node));
    root->next->next->x = 30;
    root->next->next->next = NULL;

    node *iter;
    iter = root;

    printf("%d ", iter->x);
    iter = iter->next;
    printf("%d ", iter->x);
    iter = iter->next;
    printf("%d ", iter->x);
    iter = iter->next;
    printf("%d ", iter->x);

    return 0;
}