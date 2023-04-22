#include <stdio.h>

/* Modify the maxmin.c program of section 11.4 so that the max_min function uses a pointer instead of an integer to keep
 * track of the current position in the array.
 */

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main()
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; ++i)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
}

void max_min(int a[], int n, int *max, int *min)
{
    const int *p = a;
    *max = *min = *a;

    while (++p < a + n) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}
