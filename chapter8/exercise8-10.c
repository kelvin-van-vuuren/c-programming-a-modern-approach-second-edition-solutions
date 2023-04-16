#include <stdio.h>

/* Write a declaration or an 8x8 char array named chess_board. Include and initialiser that puts the following data into
 * the array (one character per array element): rnbqkbnr pppppppp . . . . . . . . . . . . . . . . PPPPPPPP RNBQKBNR
 */

#define SIZE 8

int main()
{
    int i, j;

    char chess_board[SIZE][SIZE] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            printf("%c", chess_board[i][j]);
        }
        printf("\n");
    }
}
