#include <stdio.h>

/* Modify the reverse.c program of Section 8.1 to use the expression (int)(sizeof(a) / sizeof(a[0])) (or a macro with
 * this value) for the array length
 */

#define N 10
#define ARR_LENGTH (int)(sizeof(a) / sizeof(a[0]))

int main()
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < ARR_LENGTH; ++i)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = ARR_LENGTH - 1; i >= 0; --i)
        printf(" %d", a[i]);
    printf("\n");
}
