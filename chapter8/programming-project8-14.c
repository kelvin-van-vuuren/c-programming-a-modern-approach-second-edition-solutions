/* Write a program that reverse the words in a sentence */

#include <stdio.h>
#define MAX 1000

int main()
{
    char s[MAX];
    int i, j;
    char c, endchar;

    endchar = '\0';

    printf("Enter a sentence: ");
    for (i = 0; (c = getchar()) != '\n' && c != '\0' && i < MAX - 1; ++i) {
        if (c == '.' || c == '?' || c == '!') {
            endchar = c;
            break;
        }
        s[i] = c;
    }

    s[i--] = '\0';

    printf("Reversal of sentence: ");
    while (i >= 0) {
        while (i >= 0 && s[i--] != ' ')
            ;

        j = i <= 0 ? 0 : i + 2;
        while (s[j] != ' ' && s[j] != '\0')
            putchar(s[j++]);

        if (i >= 0)
            putchar(' ');
    }

    if (endchar != '\0')
        printf("%c", endchar);

    printf("\n");
}
