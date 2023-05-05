#include <stdio.h>

/* European countires use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal
 * Product Code (UPC) found in North America, Each EAN ends with a check digit, just as a UPC does.Modify the upc.c
 * program os Section 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of
 * the EAN as a single number. */

int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    first_sum = d2 + d4 + d6 + d8 + d10 + d12;
    second_sum = d1 + d3 + d5 + d7 + d9 + d11;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
}
