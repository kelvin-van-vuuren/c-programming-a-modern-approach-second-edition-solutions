#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters (all '.'
 * initially). The program must randomly "walk" from element to element, always going up, down, left, or right by one
 * element. The elements visited by the program will be labeled with the letters A through Z, in the order visited.
 */

#define SIZE 10
#define ALPHA 26
#define DIRECTIONS 4
#define DIMENSIONS 2

int main()
{
    int i, j;
    int x, y; /* to store original coordinates if need to be reverted */
    char c; /* current character between A-Z */
    char arr[SIZE][SIZE];
    int coordinates[DIMENSIONS] = {0};
    const int directions[] = {-1, 1, -1, 1}; /* left, right, up, down */
    int move; /* direction of randomly generated move (0 - 3) */
    int update; /* value of updated coordinate */

    /* init array */
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            arr[i][j] = '.';
        }
    }

    arr[0][0] = 'A';

    /* initialise random number generator with current time */
    srand(time(NULL));

    for (c = 'B'; c - 'A' < ALPHA; ++c) {
        /* current coordinates */
        x = coordinates[0];
        y = coordinates[1];

        /* check if stuck */
        if ((x == SIZE - 1 || arr[x + 1][y] != '.') && (x == 0 || arr[x - 1][y] != '.') &&
            (y == SIZE - 1 || arr[x][y + 1] != '.') && (y == 0 || arr[x][y - 1] != '.'))
            break;

        /* else there will be a valid position to move to */
        while (1) {
            move = rand() % DIRECTIONS;
            update = (coordinates[(int)(move > 1)] += directions[move]);

            if (update >= 0 && update < SIZE && arr[coordinates[0]][coordinates[1]] == '.')
                break;

            coordinates[0] = x;
            coordinates[1] = y;
        }

        arr[coordinates[0]][coordinates[1]] = c;
    }

    /* print array */
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}
