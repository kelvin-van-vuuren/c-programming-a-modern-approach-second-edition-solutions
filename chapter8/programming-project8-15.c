#include <stdio.h>

/* One of the oldest known ecnryption technqies is the Caesar cipher, attributed to Julius Caesar. It involves replacing
 * each letter in a message with another letter that is a fixed number of position later in the alphabet. If The
 * replacement would go past the letter Z, the cipher "wraps around" to the beginning of the alphabet. For example, if
 * each letter is replaced by the letter rwo possitions after it, then Y would be replaced by A, and Z would be replaced
 * by B. Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted
 * and the shift amount (the number of positions by which letters should be shifted).
 */

#define MAX 80

#define SHIFT_MIN 1
#define SHIFT_MAX 25

int main()
{
    char message[MAX];
    int i, shift;
    char c, base;

    printf("Enter message to be encrypted: ");
    /* conversion specifier below makes scanf read up until newline character and include whitespace */
    scanf("%[^\n]", message);

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    /* check bounds on shift amount */
    if (shift < SHIFT_MIN)
        shift = SHIFT_MIN;
    else if (shift > SHIFT_MAX)
        shift = SHIFT_MAX;

    printf("Encrypted message: ");
    for (i = 0; i < MAX && (c = message[i]) != '\0'; ++i) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            c = ((c - base) + shift) % 26 + base;
        }
        putchar(c);
    }

    printf("\n");
}
