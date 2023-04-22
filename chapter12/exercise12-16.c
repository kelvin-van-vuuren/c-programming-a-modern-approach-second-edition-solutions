#include <stdio.h>

#define ROW 7
#define COL 24

/* Write a loop that prints the highest temperature in the temperatures array (see Exercise 14) for each day of the
 * week. The loop body should call the find_largest function, passing it one row of the array at a time.
 */

int find_largest(const int *a, int n)
{
    const int *p;
    int largest;
    largest = *a;

    for (p = a; p < a + n; ++p) {
        if (*p > largest)
            largest = *p;
    }

    return largest;
}

int main()
{
    int i, temperatures[ROW][COL] = {{[0] = 1}, {[1] = 2}, {[2] = 3}, {[3] = 4}, {[4] = 5}, {[5] = 6}, {[6] = 7}};
    const int(*p)[COL];

    printf("array\n{\n");
    for (i = 0, p = temperatures; p < temperatures + ROW; ++i, ++p) {
        for (i = 0; i < COL; ++i) {
            printf("%d ", (*p)[i]);
        }
        printf("\n");
    }
    printf("}\n");

    for (i = 0, p = temperatures; p < temperatures + ROW; ++i, ++p)
        printf("day %d highest temp: %d\n", i, find_largest(*p, COL));
}
