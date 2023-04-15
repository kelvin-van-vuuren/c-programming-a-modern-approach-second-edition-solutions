#include <stdio.h>
#include <math.h>

/* Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4 / 3 * pi * r^3.
 * (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r
 * by itself twice to compute r^3. */

/* The 4 / 3 section of the formula must be written as 4.0f / 3.0f so that the fractional part result of the division is
 * not truncated. This would occur because 4 and 3 are both integers and, therefore, the value returned from the
 * division would also be an integer. Writing both 4 and 3 as floats ensures that the result returned is also a float.
 */

#define RADIUS 10
#define RADIUS_CUBED (RADIUS * RADIUS * RADIUS)

int main()
{
    float volume = 4.0F / 3.0F * M_PI * RADIUS_CUBED;
    printf("Volume of sphere with radius %d: %f\n", RADIUS, volume);
}
