#include <stdio.h>

/* Write a program that reads a 5 x 5 array of integers and then prints the row sums and the column sums.
 */

#define SIZE 5

int main()
{
    int i, j;
    int values[SIZE][SIZE] = {0};
    int rowSum, columnSum;

    for (i = 0; i < SIZE; ++i) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < SIZE; ++j)
            scanf("%d", &values[i][j]);
    }

    printf("Row totals: ");
    for (i = 0; i < SIZE; ++i) {
        rowSum = 0;
        for (j = 0; j < SIZE; ++j) {
            rowSum += values[i][j];
        }
        printf("%d ", rowSum);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < SIZE; ++i) {
        columnSum = 0;
        for (j = 0; j < SIZE; ++j) {
            columnSum += values[j][i];
        }
        printf("%d ", columnSum);
    }

    printf("\n");
}
