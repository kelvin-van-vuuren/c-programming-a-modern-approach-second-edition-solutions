#include <stdbool.h>
#include <stdio.h>

/* Modify the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for
 * repeated digits. The program should terminate when the user enters a number that's less than or equal to 0.
 */

#define DIGITS 10

int main()
{
    bool digit_seen[DIGITS];
    int i, digit;
    long n, number;

    while (true) {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0)
            break;

        /* clear digit_seen array */
        for (i = 0; i < DIGITS; ++i)
            digit_seen[i] = false;

        number = n;
        while (number > 0) {
            digit = number % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            number /= 10;
        }

        if (number > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");
    }
}
