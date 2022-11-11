#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("date.txt", "w");

    int date[4];
    for (int i = 0; i < 4; i++)
    {
        printf("%d.Date: ", i + 1);
        scanf("%d", &date[i]);
        fprintf(fp, "%d. Date: %d\n", i + 1, date[i]);
    }
    fclose(fp);

    return 0;
}