#include <stdio.h>

/* Create and run Kernighan and Ritchie's famous "hello, world" program. Do you get a warning message from the compiler?
 * If so, what's needed to make it go away? */

/*  Compiling with gcc version 12.2.1 there are no warnings when compiling this program. As a guess, I would say that
 * older compiler versions may have give a warning about a missing return statement in the main function. */

int main() { printf("hello world\n"); }
