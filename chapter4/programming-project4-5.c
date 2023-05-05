#include <stdio.h>

/* Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one
 * digit, then five digits, and then another five digits. */

#define LEN 11

int main()
{
    int i, upc, first_sum, second_sum, total;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%d", &upc);

    first_sum = second_sum = 0;
    for (i = LEN; i > 0; --i, upc /= 10) {
        if (i % 2 == 0) {
            second_sum += upc % 10;
        } else {
            first_sum += upc % 10;
        }
    }

    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
}
