#include <stdio.h>

/* Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments.
 * Display each balance with two digits after the decimal point.
 */

/* A for loop would be well suited for this, however, for loops have not yet been introduced at this point in the book
 */

int main()
{
    float loan = 0;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    float interest = 0;
    printf("Enter interest rate: ");
    scanf("%f", &interest);

    float repayment = 0;
    printf("Enter monthly repayment: ");
    scanf("%f", &repayment);

    float balance = loan;

    /* convert interest to percentage */
    interest = interest / 100.0 + 1;

    float interestAmount = (balance * interest - balance) / 12;
    balance = balance - repayment + interestAmount;
    printf("Balance remaining after first payment: %.2f\n", balance);

    interestAmount = (balance * interest - balance) / 12;
    balance = balance - repayment + interestAmount;
    printf("Balance remaining after second payment: %.2f\n", balance);

    interestAmount = (balance * interest - balance) / 12;
    balance = balance - repayment + interestAmount;
    printf("Balance remaining after third payment: %.2f\n", balance);
}
