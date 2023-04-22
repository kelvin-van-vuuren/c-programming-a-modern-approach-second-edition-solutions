#include <stdio.h>

/* Section 8.2 had a program fragment in which two nested for loops intialised the array ident for use as an identity
 * matrix. Rewrite this code, using a single pointer to step through the array one element at a time.
 */

#define N 10

void init_original(double ident[N][N])
{
    int row, col;

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (row == col)
                ident[row][col] = 1;
            else
                ident[row][col] = 0;
        }
    }
}

void init(double ident[N][N])
{
    double *p;
    int zeros = N;

    // for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; ++p) {
    for (p = *ident; p < *(ident + N); ++p) {
        if (zeros == N) {
            *p = 1;
            zeros = 0;
        } else {
            *p = 0;
            ++zeros;
        }
    }
}

int main()
{
    double ident[N][N];
    int row, col;

    // init_original(ident);
    init(ident);

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            printf("%.1f ", ident[row][col]);
        }
        printf("\n");
    }
}
