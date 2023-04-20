#include <stdio.h>

/* Modify the find_largest function so that is uses pointer arithmetic - not subscripting - to visit array elements */

#define N 5

int find_largest(int *a, int n)
{
    int *p, largest;
    largest = *a;

    for (p = a; p < a + n; ++p) {
        if (*p > largest)
            largest = *p;
    }

    return largest;
}

int main()
{
    int a[N] = {0, 1, 2, 3, 4};
    const int *p;

    printf("array { ");
    for (p = a; p < a + N; ++p)
        printf("%d ", *p);
    printf("}\n");

    printf("largest element: %d\n", find_largest(a, N));
}
