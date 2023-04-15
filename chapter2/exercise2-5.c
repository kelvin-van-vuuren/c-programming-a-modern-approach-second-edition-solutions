#include <stdio.h>

/* which of the following are not legal C identifiers?
 * a) 100_bottles
 * b) _100_bottles
 * c) one_hundred__bottles
 * d) bottles_by_the_hundred_
 */

int main()
{
    printf("From the the examples given, the only identifier which is not legal in C is 100_bottles. This is because the identifier starts with a numeric character. An identifier in C may contain letters, digits, and underscores, but must begin with a letter or underscore.\n");
}
