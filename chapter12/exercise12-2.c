#include <stdio.h>

/* Suppose that high, low, and middle are all pointer variables of the same type, and that low and high point to
 * elements of an array. Why is the following statement illegal, and how could it be fixed?
 * middle = (low + high) / 2;
 */

int main()
{
    printf(
        "The statement:\nmiddle = (low + high) / 2\nis illegal because of (low + high). We cannot add two pointer "
        "together.");
    printf("C only supports three forms of pointer arithmetic:\n");
    printf(
        "- Adding an integer to a pointer.\n- Subtracting an integer from a pointer\n- Subtracting one pointer from "
        "another.\n");
    printf("The middle can be found using:\n");
    printf("middle = ((high - low) / 2) + low");
}
