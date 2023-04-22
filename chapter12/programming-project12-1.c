#include <stdio.h>

/* Write a program that reads a message, then prints the reversal of the message:
 * Enter a message: Don't get mad, get even.
 * Reversal is: .neve teg, dam teg t'noD
 */

#define MAX 100

int main()
{
    char c, *p, s[MAX];

    printf("Enter a message: ");

    p = s;
    while ((c = getchar()) != '\n' && p < s + MAX)
        *p++ = c;

    while (p >= s)
        printf("%c", *--p);

    printf("\n");
}
