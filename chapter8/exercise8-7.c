#include <stdio.h>

/* Using the shortcuts described in Section 8.2, shrink the initialiser for the segments array from exercise 8-6 as much
 * as you can.
 */

/* The inner braces could also be omitted here, however, the book explains that this can be risky so I have avoided
 * this. */

#define DIGITS 10
#define SEGMENTS 7

int main()
{
    int i, j;

    /* finish initialiser so that electronic device would display 0 - 9 */
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                                 {[1] = 1, 1},
                                 {1, 1, [3] = 1, 1, [6] = 1},
                                 {1, 1, 1, 1, [6] = 1},
                                 {[1] = 1, 1, [5] = 1, [6] = 1},
                                 {1, [2] = 1, 1, [5] = 1, [6] = 1},
                                 {1, [2] = 1, 1, 1, 1, 1},
                                 {1, 1, 1},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, [5] = 1, 1}};

    for (i = 0; i < DIGITS; ++i) {
        printf("Digit %d:", i);
        for (j = 0; j < SEGMENTS; ++j) {
            printf(" %d", segments[i][j]);
        }
        printf("\n");
    }
}
