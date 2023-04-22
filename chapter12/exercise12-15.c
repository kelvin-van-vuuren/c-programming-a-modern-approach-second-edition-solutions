#include <stdio.h>

#define ROW 7
#define COL 24

/* Write a loop that prints all temperature readings stored in row i of the temperatures array (Exercise 15). Use a
 * pointer to visit each element of the row.
 */

int main()
{
    int i, temperatures[ROW][COL] = {0};
    const int *p;

    printf("array\n{");
    for (i = 0, p = *temperatures; p < *(temperatures + ROW); ++i, ++p) {
        if (i % COL == 0)
            printf("\n");
        printf("%d ", *p);
    }
    printf("\n}\n");
}
