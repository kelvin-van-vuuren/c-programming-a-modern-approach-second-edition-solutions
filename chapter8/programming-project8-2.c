#include <stdbool.h>
#include <stdio.h>

/* Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears in
 * the number.
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

    printf("Digits:     ");
    for (i = 0; i < DIGITS; ++i)
        printf("%d ", i);

    printf("\n");

    printf("Occurences: ");
    for (i = 0; i < DIGITS; ++i)
        printf("%d ", occurences[i]);
    printf("\n");
}
