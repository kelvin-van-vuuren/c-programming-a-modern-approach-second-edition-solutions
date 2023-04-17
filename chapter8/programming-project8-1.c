#include <stdio.h>

/* Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated:
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 */

#define DIGITS 10

int main()
{
    int occurences[DIGITS] = {0};
    int i, digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        ++occurences[digit];
        n /= 10;
    }

    printf("Repeated digits: ");
    for (i = 0; i < DIGITS; ++i) {
        if (occurences[i] > 1)
            printf("%d ", i);
    }
    printf("\n");
}
