#include <stdio.h>

/* Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the
 * smallest numver of $20, $10, $5, and $1 bills */

int main()
{
    int amount = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenty = amount / 20;
    amount -= (20 * twenty);

    int ten = amount / 10;
    amount -= (10 * ten);

    int five = amount / 5;
    amount -= (5 * five);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", amount);
}
