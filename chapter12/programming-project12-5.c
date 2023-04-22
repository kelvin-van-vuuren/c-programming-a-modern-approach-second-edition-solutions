#include <stdio.h>

/* Modify programming project 14 from chapter 8 so that it uses a pointer instead of an integer to keep track of the
 * current position in the array that contains the sentence.
 */

#define MAX 1000

int main()
{
    char s[MAX];
    int i, j;
    char c, endchar;
    char *p, *q;

    endchar = '\0';

    printf("Enter a sentence: ");

    for (p = s; (c = getchar()) != '\n' && p < s + MAX - 1; ++p) {
        if (c == '.' || c == '?' || c == '!') {
            endchar = c;
            break;
        }
        *p = c;
    }

    *p-- = '\0';

    while (p >= s) {
        while (p >= s && *p-- != ' ')
            ;

        q = p <= s ? s : p + 2;
        while (*q != ' ' && *q != '\0')
            putchar(*q++);

        if (p >= s)
            putchar(' ');
    }

    if (endchar != '\0')
        printf("%c", endchar);

    printf("\n");
}
