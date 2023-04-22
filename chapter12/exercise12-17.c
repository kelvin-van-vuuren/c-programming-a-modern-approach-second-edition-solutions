#include <stdio.h>

/* Rewrite the following function to use pointer arithmetic instea of array subscripting. Eliminate the variables i and
 * j and all uses of the [] operator). Use a single loop instead of nest loops
 */

#define LEN 5
#define N 5

/* original */
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; ++i)
        for (j = 0; j < LEN; ++j)
            sum += a[i][j];

    return sum;
}

/* rewrite */
int sum_two_dimensional_array_ptr(const int a[][LEN], int n)
{
    const int *p;
    int sum = 0;

    for (p = *a; p < *(a + n); ++p)
        sum += *p;

    return sum;
}

int main()
{
    int i, a[N][LEN] = {{1}, {2}, {3}, {4}, {5}};
    const int *p;

    printf("array\n{");
    for (i = 0, p = *a; p < *(a + N); ++i, ++p) {
        if (i % LEN == 0)
            printf("\n");
        printf("%d ", *p);
    }
    printf("\n}\n");

    printf("Sum: %d\n", sum_two_dimensional_array_ptr(a, N));
}
