#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root, *parent = NULL;

void insert(struct node *r, int val);
void inorder(struct node *p);
void preorder(struct node *p);
struct node *findMin(struct node *n);
struct node *deletenode(struct node *r, int key);

int main()
{
    int dizi[] = {50, 30, 23, 31, 66, 71, 70, 20, 24, 77, 27, 76, 78, 79};
    int key, n = sizeof(dizi) / sizeof(int);
    printf("%d, %d",key, n);
    printf("Root = %d, Empty tree created \n", root);

    for (int i = 0; i < n; i++)
        insert(root, dizi[i]);

    printf("\nInorder traversal of the BST is: \n");
    inorder(root);

    printf("\nPreorder traversal of the BST is: \n");
    preorder(root);

    printf("\nEnter the value to be deleted: ");
    scanf("%d", &key);
    root = deletenode(root, key);

    printf("\nAfter deletion, inorder traversal of the BST is: \n");
    inorder(root);

    printf("\nAfter deletion, preorder traversal of the BST is:\n");
    preorder(root);

    return 0;
}

void insert(struct node *r, int val)
{
    struct node *newNode, *current;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;

    if (r == NULL)
    {
        r = newNode;
        root = r;
    }
    else
    {
        current = r;
        while (current != NULL)
        {
            parent = current;
            if (newNode->data < current->data)
                current = current->left;
            else
                current = current->right;
        }
        if (newNode->data < parent->data)
            parent->left = newNode;
        else
            parent->right = newNode;
    }
}

struct node *deletenode(struct node *r, int key)
{
    if (key > r->data)
        r->right = deletenode(r->right, key);
    else if (key < r->data)
        r->left = deletenode(r->left, key);
    else if (key == r->data)
    {
        printf("Searched value found = %d, r = %d ", r->data, r);
        if (r->left == NULL && r->right == NULL)
        {
            free(r);
            r = NULL;
        }
        else if (r->left == NULL)
        {
            struct node *temp = r;
            r = r->right;
            free(temp);
        }
        else if (r->right == NULL)
        {
            struct node *temp = r;
            r = r->left;
            free(temp);
        }
        else
        {
            struct node *temp = findMin(r->right);
            r->data = temp->data;
            r->right = deletenode(r->right, temp->data);
        }
    }
    return r;
}

struct node *findMin(struct node *n)
{
    struct node *current = n;
    while (current->left != NULL)
        current = current->left;
    printf("\nMin node %d, data %d : \n", current, current->data);
    return current;
}

void inorder(struct node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d ", p->data);
        inorder(p->right);
    }
}

void preorder(struct node *p)
{
    if (p != NULL)
    {
        printf(">> Ptr = %d, data = %d, Left = %d, Right = %d \n", p, p->data, p->left, p->right);
        preorder(p->left);
        preorder(p->right);
    }
}
