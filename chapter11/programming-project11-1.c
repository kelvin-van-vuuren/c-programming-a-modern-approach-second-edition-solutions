/* Modify programming project 2-7 so that it inclues the following function:
 * void pay_dollars(int dollars, int *twenties, int *tens, int *fives, int *ones);
 * The functions determines the smallest number of $20, $10, $5, and $1 bills necessary to pay the dollars represented
 * by the dollars parameter. The twenties parameter points to a a variable in which the function will store the number
 * of $20 bills required. the tens, fives, and ones parameters are similar.
 */

void pay_dollars(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= (20 * *twenties);

    *tens = dollars / 10;
    dollars -= (10 * *tens);

    *fives = dollars / 5;
    dollars -= (5 * *fives);

    *ones = dollars;
}

int main()
{
    int dollars, twenty, ten, five, one;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    pay_dollars(dollars, &twenty, &ten, &five, &one);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
}
