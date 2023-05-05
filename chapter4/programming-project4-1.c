#include <stdio.h>

/* Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. A
 * session with the program should have the following appearance:
 * Enter a two-digit number: 28
 * The reversal is: 82 Read
 * the number using %d , then break it into two digits
 */

int main()
{
    int i, n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    if (n < 10 || n >= 100) {
        printf("error: number must be 2 digits long\n");
        return 1;
    }

    printf("The reversal is: ");
    for (i = 0; i < 2; ++i, n /= 10)
        printf("%d", n % 10);

    printf("\n");
}
