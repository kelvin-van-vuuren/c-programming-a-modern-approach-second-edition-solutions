#include <stdio.h>

/* Suppose that the following declarations are in effect:
 * int a[] = {5, 15, 34, 54, 14, 2,42, 72};
 * int *p = &a[1], *q = &a[5];
 * a) What is the value of *(p + 3)?
 * b) What is the value of *(q - 3)?
 * c) What is the value of q - p?
 * d) Is the condition p < q true or false?
 * e) Is the condition *p < * q true or false?
 */

int main()
{
    printf("Given the following declarations:\n");
    printf("int a[] = {5, 15, 34, 54, 14, 2, 42, 72};\n");
    printf("int *p = &a[1], *q = &a[5]\n");

    printf("*(p + 3) = 14\n");
    printf("*(q - 3) = 34\n");
    printf("q - p = 4 (this is the difference in sizes of integer type between the two in memory)\n");
    printf("p < q = true\n");
    printf("*p < *q = false\n");
}
