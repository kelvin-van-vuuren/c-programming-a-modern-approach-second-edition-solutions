#include <stdio.h>

/* Using the array from exercise 8, write a program fragment that computes the average temperature for a month (averaged
 * over all days of the month and all hours of the day).
 */

#define DAYS 30
#define HOURS 24

int main()
{
    int i, j;
    float sum = 0;
    float temperature_readings[DAYS][HOURS] = {0};

    for (i = 0; i < DAYS; ++i)
        for (j = 0; j < HOURS; ++j)
            sum += temperature_readings[i][j];

    float average = sum / (DAYS * HOURS);

    printf("Average tempature: %f\n", average);
}
