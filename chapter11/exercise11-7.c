#include <stdbool.h>
#include <stdio.h>

/* Write the following function:
 * void split_date(int day_of_year, int year, int *month, int *day);
 * day_of_year is an integer between 1 and 366, specifiying a particular day within the year designated by year. month
 * and day point to variables in which the function will store the equivalent month (1-12) and day within that month
 * (1-31).
 */

/* dummy values for 0 index since value for month needs to between 1 - 12. Multidimensional to account for possible leap
 * year. */
const int daytab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                           {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i;
    bool leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    for (i = 1; day_of_year > daytab[leap][i]; ++i)
        day_of_year -= daytab[leap][i];

    *month = i;
    *day = day_of_year;
}

int main()
{
    int day_of_year, year, month, day;

    day_of_year = 110;
    year = 2023;
    split_date(day_of_year, year, &month, &day);

    printf("day %d into year %d is:\nmonth: %d\nday: %d\n", day_of_year, year, month, day);

    /* leap year */
    day_of_year = 111;
    year = 2024;
    split_date(day_of_year, year, &month, &day);
    printf("day %d into year %d is:\nmonth: %d\nday: %d\n", day_of_year, year, month, day);
}
