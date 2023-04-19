#include <stdio.h>

/* Write the following function:
 * void find_two_largest(int a[], int n, int *largest, int *second_largest);
 * When passed an aray a of length, the function will search a for its largest and second-largest elements, storing
 * them in the variables pointed to by largest and second_largest, respectively.
 */

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = *second_largest = a[0];

    for (i = 1; i < n; ++i) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}

int main()
{
    int i;
    int a[N] = {1, 3, 2, 0, 0, 0, 0, 0, 10, 0};
    int largest, second_largest;

    find_two_largest(a, N, &largest, &second_largest);

    printf("a[n] = ");
    for (i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n");

    printf("Largest %d\n", largest);
    printf("Second largest %d\n", second_largest);
}
