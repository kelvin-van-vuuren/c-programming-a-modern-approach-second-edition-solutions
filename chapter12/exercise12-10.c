#include <stdio.h>

/* Modify the find_middle function of Section 11.5 so that it uses pointer arithmetic to calculate the return value. */

#define N 5

int *find_middle(int *a, int n) { return a + n / 2; }

int main()
{
    int a[N] = {1, 2, 3, 4, 5};
    const int *p;

    printf("array { ");
    for (p = a; p < a + N; ++p)
        printf("%d ", *p);
    printf("}\n");

    printf("middle element: %d\n", *find_middle(a, N));
}
