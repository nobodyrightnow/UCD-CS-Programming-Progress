/* Write a C program to read an integer year and check if year is a leap year. 

A year is a leap year if it is divisible by 4 but not by 100 or it is divisible by 400.

Here is a sample run of the program: 

Enter a year:
2000
The year 2000 is a leap year */

#include <stdio.h>

int main(void)
{
    int year, is_leap = 0;

    do
    {
        printf("Enter a year:\n");
    
        if (scanf("%d", &year) != 1)
        {
            while (getchar() != '\n');
            year = 0;
        }
    } while (year == 0);
    
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        is_leap = 1;
    }
    
    printf("The year %d is ", year);

    if (!is_leap)
    {
        printf("not ");
    }
    
    printf("a leap year\n");

    return 0;
}