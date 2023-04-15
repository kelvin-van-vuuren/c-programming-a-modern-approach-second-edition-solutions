#include <stdio.h>

/* Which of the following are keywords in C?
 * a) for
 * b) If
 * c) main
 * d) printf
 * e) while
 */

int main()
{
    printf(
        "Keywords are predefined or reserved words that have special meanings to the compiler. These are part of the "
        "syntax and cannot be used as identifiers in the program\n");

    printf("a) 'for' is a keyword\n");
    printf("b) 'If' is a not a keyword. C is case-sensitive, the 'if' keyword is lower-case.\n");
    printf("c) 'main' is not a keyword. This is the name of the function called at program startup.\n");
    printf("d) 'printf' is not a keyword. 'printf' is the name of a function defined in C's standard library.\n");
    printf("e) 'while' is a keyword.\n");
}
