#include <stdio.h>

/* What output do the following calls of printf produce?
 * a) printf("%6d,%4d", 86, 1040);
 * b) printf("%12.5e", 30.253);
 * c) printf("%.4f", 83.162);
 * d) printf("%-6.2g", 0.0000009979);
 */

int main()
{
    printf("a)'86    ,1040'\n");
    printf("b) ' 3.02530e+01'\n");
    printf("c) '83.1620'\n");
    printf("d) '1e-06 '\n'");
}
