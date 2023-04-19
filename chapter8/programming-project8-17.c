#include <stdio.h>

/* Write a program that prints an n x n magic square (a square arrangement of the numbers 1, 2, ..., n^2 in which the
 * sums of the rows, columns, and diagonals are all the same). The user will specify the value of n.
 */

int main()
{
    int x, y, prevx, prevy, n, size;
    printf(
        "This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n "
        "Enter size of magic square ");

    printf("\n");
    scanf("%d", &size);

    int square[size][size];

    for (x = 0; x < size; ++x)
        for (y = 0; y < size; ++y)
            square[x][y] = 0;

    x = 0;
    y = size / 2;
    n = 1;

    square[x][y] = n++;

    while (n <= size * size) {
        prevx = x;
        prevy = y;

        /* wrap arounds */
        if (--x < 0)
            x = size - 1;

        if (++y >= size)
            y = 0;

        /* move to row below if occupied */
        if (square[x][y] != 0) {
            if (++prevx >= size)
                prevx = 0;

            x = prevx;
            y = prevy;
        }

        square[x][y] = n++;
    }

    for (x = 0; x < size; ++x) {
        for (y = 0; y < size; ++y) {
            printf("%4d", square[x][y]);
        }
        printf("\n");
    }
}
