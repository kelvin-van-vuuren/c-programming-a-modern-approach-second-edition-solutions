#include <stdbool.h>
#include <stdio.h>

/* Assume that the following array contains a week's worth of hourly temperature readings, with each row containing the
 * readings for one day:
 * int temperatures[7][24];
 * Write a statement that uses the search functions (Exercise 7) to search
 * the entire termperatures array for the value 32
 */

#define ROW 7
#define COL 24
#define KEY 32

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p = a; p < a + n; ++p) {
        if (*p == key)
            return true;
    }

    return false;
}

int main()
{
    int temperatures[ROW][COL] = {0};
    const int *p;

    temperatures[ROW - 1][COL - 1] = KEY;

    printf("array { ");
    for (p = *temperatures; p < *(temperatures + ROW); ++p)
        printf("%d ", *p);
    printf("}\n");

    for (p = *temperatures; p < *(temperatures + ROW); ++p) {
        if (search(p, COL, KEY)) {
            printf("Found key %d\n", KEY);
            return 0;
        }
    }

    printf("Did not find key %d\n", KEY);
}
