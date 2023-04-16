#include <stdio.h>

/* The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is the sum of the two preceding numbers.
 * Write a program fragment that declares an array named fib_numbers of length 40 and fills the array with the first 40
 * Fibonacci numbers. Hint: Fill in the first two numbers individually, then use a loop to compute the ramining numbers.
 */

#define N 40

int main()
{
    int i, fib_numbers[N];

    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    for (i = 2; i < N; ++i)
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];

    printf("First %d Fibonacci numbers:\n", N);
    for (i = 0; i < N; ++i)
        printf("%d ", fib_numbers[i]);
    printf("\n");
}
