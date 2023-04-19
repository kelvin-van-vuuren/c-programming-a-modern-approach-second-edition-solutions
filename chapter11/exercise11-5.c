#include <stdio.h>

/* Write the following function:
 * void split_time(long total_sec, int *hr, int *min, int *sec);
 * total_sec is a time represented as the number of seconds since midnight. hr, min, and sec are pointers to variables
 * in which the function will store the equivalent time in hours (0-23), minutes (0- 59), respectively.
 */

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 60 / 60;
    *min = total_sec / 60 - (*hr * 60);
    *sec = total_sec - (*min * 60) - (*hr * 60 * 60);
}

int main()
{
    long secs = 60 * 60 + 60 + 3;
    int hr, min, sec;

    split_time(secs, &hr, &min, &sec);

    printf("hours: %d, mins: %d, secs: %d\n", hr, min, sec);
}
