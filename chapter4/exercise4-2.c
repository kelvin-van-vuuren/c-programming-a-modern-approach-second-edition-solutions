#include <stdio.h>

/* If i and j are positive integers, does (-1) / j always have the same values as -(i/j)? Justify your answer. */

int main()
{
    printf(
        "In C89 the expression could produce different results as it is division of negative numbers is implementation "
        "defined. However, in C99, the standard declares that this will always truncate towards zero and therefore the "
        "expression will produce the same result.\n");
}
