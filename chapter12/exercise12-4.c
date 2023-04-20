#include <stdbool.h>
#include <stdio.h>

/* Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the pointer variable top_ptr instead
 * of the integer variable top.
 */

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = contents;

void make_empty() { top_ptr = contents; }

bool is_empty() { return top_ptr == contents; }

bool is_full() { return top_ptr == &contents[STACK_SIZE]; }

void push(int i)
{
    if (is_full())
        printf("stack overflow\n");
    else
        *top_ptr++ = i;
}

int pop()
{
    if (is_empty()) {
        printf("stack underflow\n");
        return -1;
    } else {
        return *--top_ptr;
    }
}

int main() { return 0; }
