#include <ctype.h>
#include <stdio.h>

/* Write the evaluate_position function described in Exercise 13 of Chapter 9. Use pointer arithmetic - not subscripting
 * - to visit array elements. Use a single loop instead of nested loops.
 */

#define N 8

int value(char c)
{
    c = tolower(c);

    switch (c) {
        case 'q':
            return 9;
        case 'r':
            return 5;
        case 'b':
        case 'n':
            return 3;
        case 'p':
            return 1;
        default:
            return 0;
    }
}

int evaluate_position(char board[N][N])
{
    int sumw;
    int sumb;
    int *s;
    char *p;

    sumw = sumb = 0;

    for (p = *board; p < *(board + N); ++p) {
        s = isupper(*p) ? &sumw : &sumb;
        *s += value(*p);
    }

    return sumw - sumb;
}

int main()
{
    char board[N][N] = {{'Q', 'R'}, {'p'}};
    printf("evaluate_position (white Q and R, black P): %d\n", evaluate_position(board));
}
