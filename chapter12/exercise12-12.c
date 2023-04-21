#include <stdio.h>

/* Write the following function:
 * void find_two_largest(const int *a, int n, int *largest, int *second_largest);
 * a points to an array of length n. The function searches the array for its largest and second largest elements,
 * storing them in the variables pointed to by largest and second_largest, respectively. Use pointer arithmetic - not
 * subscripting - to visit array elements
 */

#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    *largest = *second_largest = *a++;

    while (--n > 0) {
        if (*a > *largest) {
            *second_largest = *largest;
            *largest = *a;
        } else if (*a > *second_largest) {
            *second_largest = *a;
        }
        ++a;
    }
}

int main()
{
    int i;
    int a[N] = {1, 3, 2, 0, 0, 0, 0, 0, 10, 0};
    int largest, second_largest;

    find_two_largest(a, N, &largest, &second_largest);

    printf("a[] = { ");
    for (i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("}\n");

    printf("Largest %d\n", largest);
    printf("Second largest %d\n", second_largest);
}
