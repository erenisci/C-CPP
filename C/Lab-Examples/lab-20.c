#include <stdio.h>

int main(void)
{
    int balance = 1000, act, amount;

    printf("Balance: %d", balance);
    printf("\n\n**** ACTS ****\n");
    printf("1.Withdraw Money\n");
    printf("2.Deposit Money\n");
    printf("3.Money Balance Inquiry\n");

    printf("Choose an action : ");
    scanf("%d", &act);
    switch (act)
    {
    case 1:
        printf("\nBalance: %d\n", balance);
        printf("Enter the balance you want to withdraw: ");
        scanf("%d", &amount);
        if (amount > 1000)
        {
            printf("\nInsufficient balance!!\nEnter the balance you want to withdraw: ");
            scanf("%d", &amount);
        }
        balance -= amount;
        printf("\nNew Balance: %d", balance);
        break;

    case 2:
        printf("\nBalance: %d\n", balance);
        printf("Enter the balance you want to deposit: ");
        scanf("%d", &amount);
        balance += amount;
        printf("\nNew Balance %d", balance);
        break;

    case 3:
        printf("\nBalance: %d", balance);
        break;
    }

    return 0;
}
