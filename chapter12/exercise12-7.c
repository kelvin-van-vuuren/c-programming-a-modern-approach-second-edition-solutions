#include <stdbool.h>
#include <stdio.h>

/* Write the following function:
 * bool search (const int a[], int n, int key);
 * a is an array to be searched, n is the number of elements in the array, and key is the search key. search should
 * return true if key matches some element of a, and false if it doesn't. use pointer arithmetic - not subscripting - to
 * visit array elements.
 */

#define N 5

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p = a; p < a + n; ++p) {
        if (*p == key)
            return true;
    }

    return false;
}

int main()
{
    int a[N] = {0, 1, 2, 3, 4};
    int key;
    const int *p;

    printf("array { ");
    for (p = a; p < a + N; ++p)
        printf("%d ", *p);
    printf("}\n");

    key = 2;
    printf("contains %d: %d\n", key, search(a, N, key));

    key = 6;
    printf("contains %d: %d\n", key, search(a, N, key));
}
