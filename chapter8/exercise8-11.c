#include <stdio.h>

/* Write a program fragment that declares an 8x8 char array named checker_board and then uses a looop to store the
 * following data into the array (alternating B and R)
 */

#define SIZE 8

int main()
{
    int i, j;
    char checker_board[SIZE][SIZE];

    for (i = 0; i < SIZE; ++i)
        for (j = 0; j < SIZE; ++j)
            checker_board[i][j] = ((i + j) % 2 == 0) ? 'B' : 'R';

    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            printf("%c", checker_board[i][j]);
        }
        printf("\n");
    }
}
