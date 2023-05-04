#include <stdio.h>

/* For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If
 * they're not, show how they can be distinguished. a) "%d" vs " %d" b) "%d-%d-%d" vs "%d -%d -%d" c) "%f" vs "%f " d)
 * "%f,%f" vs "%f, %f"
 */

int main()
{
    printf(
        "a b and d are equivalent because scanf matches zero or more whitespace characters except on the final "
        "character. c is not equivalent because \"%%f \" require user to enter a non-whitespace character at the end "
        "to terminate the whitespace matching sequence");
}
