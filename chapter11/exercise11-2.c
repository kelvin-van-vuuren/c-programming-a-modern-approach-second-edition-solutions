#include <stdio.h>

/* If i is an int variable and p and q are pointers to int, which of the following assignments are legal?
 * a) p = i;
 * b) *p = &i;
 * c) *&p;
 * d) p = &q;
 * e) p = *&q;
 * f) p = q;
 * g) p = *q;
 * h) *p = q;
 * i) *p = *q;
 */

int main()
{
    printf("Given that i is an int variable and p and q are pointers to an int:\n");
    printf(
        "p = i is illegal because the statement is trying to assign a pointer p to the integer value of i but can only "
        "take the memory address of an integer variable. The & operator would need to be used to get the address of i, "
        "ie p = &i;\n");
    printf(
        "*p = &i is illegale because the stateet is trying to assign the value of the memory address p points, which "
        "is an integer type, to to the memory address of i.\n");
    printf(
        "*&p is not an assignment but the statement is legal. It gets the memory address of the pointer variable p, "
        "not the memory address that it points to, then deferences this returning the memory address that p points to. "
        "This would need to be deferenced again using the * operator to get the value stored at the memory address "
        "that p points to.\n");
    printf(
        "p = &q is illegal because by taking the memory address of q with the & operator it is returning a pointer to "
        "a pointer to an integer. Therefore, this is an assignment of incompatible types (int* to int**)\n");
    printf(
        "p = *&q is legal. This is the same as writing p = q which copies the memory address that q points to p, "
        "making p point to this address.\n");
    printf("p = f is legal, as described above.");
    printf(
        "p = *q is illegal because it is attempting to assign an integer value to a pointer to an integer. These are "
        "incompatible types.\n");
    printf(
        "*p = q is illegale because it is trying to set the integer value stored at the memory address that p points "
        "to to the memory address that q points to. These are incompatible types.\n");
    printf(
        "*p = *q is legal. This statement copies the integer value stored at the memory adress that q points to "
        "into the memory address that p points to.\n");
}
