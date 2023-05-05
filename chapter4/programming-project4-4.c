#include <stdio.h>

/* Write a program that reads an integer entered by the user and displays it in octal (base 8).
 * The output should be displayed using five digits, even if fewer digits are sufficient. */

int main()
{
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    if (n < 0 || n > 32767) {
        printf("error: number must be between 0 and 32767\n");
        return 1;
    }

    printf("In octal, your number is: %d%d%d%d%d\n", ((((n / 8) / 8) / 8) / 8) % 8, (((n / 8) / 8) / 8) % 8,
           ((n / 8) / 8) % 8, (n / 8) % 8, n % 8);
}
