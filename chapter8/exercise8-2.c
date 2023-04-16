#include <stdio.h>

/* The Q&A sections shows how to use a letter as an array subscript. Describe how to use a digit (in character form) as
 * a subscript. */

int main()
{
    printf(
        "A digit in character form can be used as a subscript to an array by subtracting the integer value of the "
        "character '0' from the digit character being used. This will work if the character set being used has "
        "sequential integer values for the characters 0 - 9.\n");

    printf("For example, to use the character 5 to index into an array:\nchar c = '5';\narray[c - '0'];\n");
}
