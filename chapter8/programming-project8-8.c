#include <limits.h>
#include <stdio.h>

/* Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the
 * total score and average score for each student, and the average score, high score, and low score for each quiz.
 */

#define SIZE 5

int main()
{
    int i, j;
    int values[SIZE][SIZE] = {0};
    int total, average, high;

    for (i = 0; i < SIZE; ++i) {
        printf("Enter student %d quiz results: ", i + 1);
        for (j = 0; j < SIZE; ++j)
            scanf("%d", &values[i][j]);
    }

    for (i = 0; i < SIZE; ++i) {
        printf("Student %d total score ", i);
        total = 0;
        for (j = 0; j < SIZE; ++j) {
            total += values[i][j];
        }
        printf("%d ", total);
        printf("average %d\n", total / SIZE);
    }

    for (i = 0; i < SIZE; ++i) {
        printf("Quiz %d total score ", i);
        total = 0;
        high = INT_MIN;
        for (j = 0; j < SIZE; ++j) {
            total += values[j][i];
            if (values[j][i] > high)
                high = values[j][i];
        }
        printf("%d ", total);
        printf("average %.2f ", (float)total / SIZE);
        printf(" high score %d\n", high);
    }

    printf("\n");
}
