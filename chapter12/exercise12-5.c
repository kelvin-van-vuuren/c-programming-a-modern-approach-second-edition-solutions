#include <stdio.h>

/* Suppose that a is a one-dimensional array an p is a pointer variable. Assuming that the assignment p = a has just
 * been performed, which of the following expressions are illegal because of mismatched types? Of the remaining
 * expressions, which are true?
 * a) p == a[0];
 * b) p == &a[0]
 * c) *p == a[0];
 * d) p[0] == a[0];
 */

int main()
{
    printf(
        "Given that p is a pointer variable, a is a one-dimensional array and that the assignment p = a has just been "
        "performed:\n");
    printf(
        "p == a[0] is illegal because int* is being compared to int. p is equivalent to &a[0] and a[0] is equivalent "
        "to *(a + 0);\n");
    printf("p == &a[0] will return true.\n");
    printf("*p == a[0] will return true.\n");
    printf("p[0] == a[0] will return true.\n");
}
