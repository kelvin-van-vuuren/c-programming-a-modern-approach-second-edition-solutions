#include <stdio.h>

/* Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added.
 */

int main()
{
    float amount, tax;

    amount = 0;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * 1.05;
    printf("With tax added: %f\n", tax);
}
