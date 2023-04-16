#include <stdio.h>

/* Modify the program of programming project 5 so that the polynomial is evaluated using the following formula:
 * 
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 * 
 * This technique for evaluating polyomials is known as Horner's Rule.
 */

int main()
{
    float x = 0;
    printf("Enter value for x: ");
    scanf("%f", &x);
    
    float answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    
    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 = %f\n", answer);
}
