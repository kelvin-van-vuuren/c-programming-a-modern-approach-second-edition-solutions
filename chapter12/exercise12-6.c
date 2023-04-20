#include <stdio.h>

/* Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, eliminate
 * the variable i and all uses of the [] operator). Make as few changes as possible. int sum_
 *
 * int sum_array(const int a[], int n)
 * {
 *   int i, sum;
 *   sum = 0;
 *   for (i = 0; i < n ++i)
 *     sum += a[i];
 *   return sum;
 *
 * }
 */

#define N 5

int sum_array(const int *a, int n)
{
    const int *p;
    int sum;

    sum = 0;

    for (p = a; p < a + n; ++p)
        sum += *p;

    return sum;
}

int main()
{
    int a[N] = {1, 2, 3, 4, 5};
    const int *p;

    printf("Sum of array { ");
    for (p = a; p < a + N; p++)
        printf("%d ", *p);
    printf("} ");

    printf("= %d\n", sum_array(a, N));
}
