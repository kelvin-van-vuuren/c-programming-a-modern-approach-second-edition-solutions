#include <stdio.h>

/* Rewrite the following function to use pointer arithmetic instead of array subscripting. In other words, eliminate the
 * variable i and all uses of the [] operator. make as few changes as possible
 */

#define N 5

void store_zeros(int *a, int n)
{
    int *p;

    for (p = a; p < a + n; ++p)
        *p = 0;
}

int main()
{
    int a[N] = {0, 1, 2, 3, 4};
    const int *p;

    printf("array { ");
    for (p = a; p < a + N; ++p)
        printf("%d ", *p);
    printf("}\n");

    printf("after passing to store_zero:\n");

    store_zeros(a, N);

    printf("{ ");
    for (p = a; p < a + N; ++p)
        printf("%d ", *p);
    printf("}\n");
}
