#include <stdio.h>

/* only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it? */

int main()
{
    printf(
        "++i and (i += 1) are equivalent. Both expressions return the value of i + 1 whilst updating item to this "
        "value. i++ will return the current value of i then increment its value, which is not the same return value as "
        "(i += 1).\n");
}
