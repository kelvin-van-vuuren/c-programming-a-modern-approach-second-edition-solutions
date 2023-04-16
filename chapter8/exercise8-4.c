#include <stdbool.h>
#include <stdio.h>

/* Repeat exercise 3, but this time use a designated initialiser. Make the initiliser as short as possible. */

#define N 7

int main()
{
    bool weekend[N] = {true, [N - 1] = true};

    for (int i = 0; i < N; ++i)
        printf("%d: %d, ", i, weekend[i]);
    printf("\n");
}
