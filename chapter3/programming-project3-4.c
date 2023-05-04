#include <stdio.h>

/* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the
 * number in the form xxx.xxx.xxxx */

int main()
{
    int area, first, second;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d ) %d -%d", &area, &first, &second);

    printf("You entered %d.%d.%d\n", area, first, second);
}
