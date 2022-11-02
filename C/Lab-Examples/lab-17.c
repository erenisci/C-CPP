#include <stdio.h>

int main(void)
{
    int id;

    printf("Enter an integer: ");
    scanf("%d", &id);

    if (++id % 2 == 0)
    {
        printf("Divides into 2\n");
        if (id < 100)
        {
            id = id / 2;
            printf(" Divided by 2\n");
        }
        else
        {
            id = id + 40;
            printf(" Added 40\n");
        }
    }

    else if (id-- % 5 == 0)
    {
        printf("Divides into 5\n");
        if (id % 3)
        {
            id = id / 2;
            printf(" Divides into 3, divided by 2\n");
        }
    }
    printf(" id =  %d", id);

    return 0;
}
