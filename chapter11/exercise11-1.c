#include <stdio.h>

/* If i is a variable and p points to i, which of the following expressions are aliases for i?
 * a) *p -- alias for i
 * b) *p = &i;
 * c) &p = q
 * d) p = &q;
 * e) *i
 * f) &i
 * g) *&i -- alias
 * h) &*i
 */

int main()
{
    printf("From the given options, *p (a) and *&i (g) are aliases for i, if p is a pointer to variable i.\n");
}
