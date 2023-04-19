#include <stdio.h>

/* the following function supposedly coputes the sum and average of the numbers in the arra a, which has length n. avg
 * and sum point to variables that the function should odify. Unfortunately, the function contains several errors; fid
 * and correct them.
 */

/*
void avg_sum_original(double a[], int n, double *avg, double *sum)
{
    int i;
    sum = 0.0;
    for (i = 0; i < n; ++i)
        sum += a[i];
    avg = sum / n;
}
*/

void avg_sum_corrected(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; ++i)
        *sum += a[i];
    *avg = *sum / n;
}
