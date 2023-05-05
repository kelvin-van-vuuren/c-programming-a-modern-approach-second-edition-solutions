#include <stdio.h>

/* Extend the program in pp4-1 to handler three digit numbers. */

int main()
{
    int i, n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n >= 1000) {
        printf("error: number must be 3 digits long\n");
        return 1;
    }

    printf("The reversal is: ");
    for (i = 0; i < 3; ++i, n /= 10)
        printf("%d", n % 10);

    printf("\n");
}
