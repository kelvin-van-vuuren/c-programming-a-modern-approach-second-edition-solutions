#include <stdio.h>

/* Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

int main()
{
    float x = 0;
    printf("Enter value for x: ");
    scanf("%f", &x);

    float answer = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %f\n", answer);
}
