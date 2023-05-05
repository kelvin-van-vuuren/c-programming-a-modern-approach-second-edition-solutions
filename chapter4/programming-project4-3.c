#include <stdio.h>

/* Rewrite the program in pp4-2 so that it prints the reversal of a three-digit number without using arithmetic to split
 * the number into digits. */

int main()
{
    int n1, n2, n3;

    printf("Enter a three-digit number: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("The reversal is: ");
    printf("%d%d%d\n", n3, n2, n1);
}
