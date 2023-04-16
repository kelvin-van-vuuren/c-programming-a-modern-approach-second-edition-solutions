#include <stdio.h>

/* We discussed using the espression sizeof(a) / sizeof(a[0]) to calculate the number of elements in an array. The
 * expression sizeof(a) / sizeof(t), where t is the type of a's elements, would also work, but it's considered an
 * inferior technique. Why? */

int main()
{
    printf(
        "Using sizeof(a) / sizeof(t), where t is the type of a's elements, requires the programmer to update the type "
        "used in the expression if the type of the array is changed. Updating the type in the expression could easily "
        "be missed and produce and unintended result. Using the expression sizeof(a) / size(a[0]) avoids this "
        "potential pitfall and is therefore regarded as a superior technique.\n");
}
