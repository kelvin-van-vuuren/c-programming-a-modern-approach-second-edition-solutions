#include <stdio.h>

/* Write a program that declares several int and float variables - without initializing them - and then prints their
 * values. Is there any pattern to the values? (Usually there isn't.)
 */

/* Output on my machine running linux 6.2.10 and compiling with gcc 12.2.1:
 * Uninitialized int a: -626424960
 * Uninitialized int b: 32707
 * Uninitialized int c: 0
 * Uninitialized float a: -626793056
 * Uninitialized float b: -626793056
 * Uninitialized float c: -626793056
 */

int main()
{
    int a, b, c;
    float x, y, z;

    printf("Uninitialized int a: %d\n", a);
    printf("Uninitialized int b: %d\n", b);
    printf("Uninitialized int c: %d\n", c);

    printf("Uninitialized float a: %d\n", x);
    printf("Uninitialized float b: %d\n", y);
    printf("Uninitialized float c: %d\n", z);

    return 0;
}
