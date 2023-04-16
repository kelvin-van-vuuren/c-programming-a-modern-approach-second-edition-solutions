#include <stdbool.h>
#include <stdio.h>

/* Write a declaration of an array named weekend containing seven bool values. Include an initialiser that makes the
 * first and last values true; all other values should be false.
 */

#define N 7

int main()
{
    bool weekend[N] = {true, false, false, false, false, false, true};

    for (int i = 0; i < N; ++i)
        printf("%d: %d, ", i, weekend[i]);
    printf("\n");
}
