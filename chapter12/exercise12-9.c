#include <stdio.h>

/* Write the following function:
 * double inner_product(const double *a, const double *b, int n);
 * a and b both point to arrays of length n. The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n - 1] * b[n
 * - 1]. Use pointer arithmetic - not subscripting - to visit array elements.
 */

#define N 5

double inner_product(const double *a, const double *b, int n)
{
    const double *p, *q;
    double retval;

    retval = 0;
    for (p = a, q = b; p < a + n; ++p, ++q)
        retval += *p * *q;

    return retval;
}

int main()
{
    double a[N] = {1, 2, 3, 4, 5};
    double b[N] = {1, 2, 3, 4, 5};
    const double *p;

    printf("array a and b = { ");
    for (p = a; p < a + N; ++p)
        printf("%.1f ", *p);
    printf("}\n");

    printf("inner product: %.1f\n", inner_product(a, b, N));
}
