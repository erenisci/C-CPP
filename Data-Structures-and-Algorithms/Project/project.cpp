#include <stdio.h>
#include <stdlib.h>

struct n
{
    int ogrNum;
    int ogrNote;
    n *next;
};
typedef n node;

int main(void)
{
    FILE *fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR: No such file.");
    }
    else
    {
        node *root, *current, *previous, *iter;
        root = current = previous = NULL;
        while (!feof(fp))
        {
            node *newNode = (node *)malloc(sizeof(node));
            if (root == NULL)
            {
                root = newNode;
                fscanf(fp, "%d %d", &root->ogrNum, &root->ogrNote);
                root->next = NULL;
            }
            else
            {
                fscanf(fp, "%d %d", &newNode->ogrNum, &newNode->ogrNote);
                newNode->next = NULL;

                current = previous = root;
                if (newNode->ogrNum < root->ogrNum)
                {
                    newNode->next = root;
                    root = newNode;
                }
                else
                {
                    while (current->ogrNum < newNode->ogrNum)
                    {
                        if (current->next != NULL)
                        {
                            previous = current;
                            current = current->next;
                        }
                        else
                            current->next = newNode;
                    }
                    if (current->ogrNum > newNode->ogrNum)
                    {
                        newNode->next = current;
                        previous->next = newNode;
                    }
                }
            }
        }

        printf("    Student ID\t\tStudent NOTE\n");
        printf("   ------------         ------------\n");
        iter = root;
        while (iter != NULL)
        {
            printf("    %d\t\t     %d", iter->ogrNum, iter->ogrNote);
            iter = iter->next;
            if (iter == NULL)
                break;
            printf("\n");
        }
    }
    fclose(fp);

    return 0;
}
