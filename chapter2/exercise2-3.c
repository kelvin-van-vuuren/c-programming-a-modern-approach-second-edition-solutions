#include <stdio.h>

/* Condense the dweight.c program by
 * 1) replacing the assignments to height, length, and width with initializers.
 * 2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf.
 */

#define INCHES_PER_POUND 166

int main()
{
    int height, length, width, volume;
    height = length = width = 0;

    printf("Enter height of box: ");
    scanf("%d", &height);

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

    return 0;
}
