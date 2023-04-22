#include <ctype.h>
#include <stdio.h>

/* Write a program that reads a message, then checks whether it's a palindrome (the letters in the message are the same
 * from left to right as from right to left):
 * Enter a message: He lived as a devil, eh?
 * Palindrome
 * Enter a message: Madam, I am Adam.
 * Not a palindrome
 */

#define MAX 100

int main()
{
    char c, *p, *q, s[MAX];

    p = q = s;

    printf("Enter a message: ");

    while ((c = toupper(getchar())) != '\n' && p < s + MAX)
        if (isalpha(c))
            *p++ = c;

    while (q <= p && *--p == *q++)
        ;

    if (q > p)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}
