#include <stdio.h>

int main(void)
{
    int num1, num2, act;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("\n1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");

    printf("\nChoose the process: ");
    scanf("%d", &act);
    switch (act)
    {
    case 1:
        printf("Number1 + Number2: %d", num1 + num2);
        break;
    case 2:
        printf("Number1 - Number2: %d", num1 - num2);
        break;
    case 3:
        printf("Number1 / Number2: %d", num1 / num2);
        break;
    case 4:
        printf("Number1 * Number2: %d", num1 * num2);
        break;
    default:
        printf("Enter a valid number!");
    }

    return 0;
}
