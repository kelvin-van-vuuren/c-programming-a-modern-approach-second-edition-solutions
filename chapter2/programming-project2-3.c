#include <math.h>
#include <stdio.h>

/* Modify the program of programming project 2-2 so that it prompts the user to enter the radius of the sphere */

int main()
{
    float radius = 0;
    scanf("%f", &radius);

    float volume = 4.0F / 3.0F * M_PI * radius * radius * radius;
    printf("Volume of sphere with radius %f: %f\n", radius, volume);
}
