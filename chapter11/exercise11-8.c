#include <stdio.h>

/* Write the following function:
 * int *find_largest(int a[], int n);
 * When passed an array a of length n, the function will return a pointer to the array's largest element.
 */

#define N 5

int *find_largest(int a[], int n)
{
    int i, *largest;

    largest = a;

    for (i = 0; i < n; ++i)
        if (a[i] > *largest)
            largest = &a[i];

    return largest;
}

int main()
{
    int a[N] = {1, 2, 3, 4, 5};
    int *largest;
    int i;

    largest = find_largest(a, N);

    printf("array: ");
    for (i = 0; i < N; ++i)
        printf("%d ", a[i]);

    printf("\nlargest element: %d\n", *largest);
}
