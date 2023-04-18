#include <ctype.h>
#include <stdio.h>

/* Write a program that tests whether two words are anagrams (permutations of the same letters). */

#define ALPHA 26

int main()
{
    int i, letters[ALPHA] = {0};
    char c;

    printf("Enter first word: ");
    while (isalpha((c = getchar())))
        ++letters[tolower(c) - 'a'];

    printf("Enter second word: ");
    while (isalpha((c = getchar())))
        --letters[tolower(c) - 'a'];

    for (i = 0; i < ALPHA; ++i) {
        if (letters[i] != 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");
}
