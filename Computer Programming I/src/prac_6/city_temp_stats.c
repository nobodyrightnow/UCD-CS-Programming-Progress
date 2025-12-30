/* Consider a text file that contains temperature records formatted as follows: each line contains a city code (int), a day number (int), and a temperature reading (double).

Write a C program to compute the minimum, maximum, mean, and count of the temperature readings for a given city code and day number. The target city code and day number should be read from the console using scanf.

For example, given the sample file:

1 3 -3.5
2 1 24.0
1 2 22.1
1 3 1.3
2 2 20.0
1 3 -4.2

here is a sample run of the program: 

Enter the target city code:
1
Enter the target day number:
3
min = -4.20
max = 1.30
mean = -2.13
count = 3
 
If there are no records for the target city code and day number the program should display No records as shown in the test cases below.

One approach to solve this problem is as follows:
(i)	Read from the file and store the temperatures corresponding to the target city code and day number in an array.
(ii)	Then iterate over the array and compute the minimum, maximum, and mean of the temperature readings.
 	 
Your program will be tested using file temps.txt. This file is available for download on Moodle.  
The above sample file (sample_temps.txt) is also available for download from Moodle. This file is useful for debugging your program. */

#include <stdio.h>
#define MAX_RECORDS 1000

int main(void) {

    /* declare variables */
    FILE *fp;
    int target_city, target_day;

    /* read the target city and and day */
    printf("Enter the target city code:\n");
    scanf("%d", &target_city);

    printf("Enter the target day number:\n");
    scanf("%d", &target_day);
    
    /* open file as an input file */
    fp = fopen("res/temps.txt", "r"); 
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return -1; 
    }

    /** Write your code here **/
    double a[MAX_RECORDS];
    int i = 0;
    char line[20];
    int city, day;
    double temp;
    while ((fgets(line, sizeof(line), fp)) != NULL)
    {
        sscanf(line, "%d %d %lf", &city, &day, &temp);
        if (city == target_city && day == target_day)
        {
            a[i++] = temp;
        }
    }
    int count = i;
    double mean = 0.0;
    double max = a[0], min = a[0];
    if (count > 0)
    {
        for (i = 0; i <= count; i++)
        {
            mean += a[i];
            if (a[i] < min && a[i] != 0) 
            {
                min = a[i];
            }
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        mean /= count;
        printf("min = %.2lf\nmax = %.2lf\nmean = %.2lf\ncount = %d", min, max, mean, count);
    }
    else
    {
        printf("No records");
    }
    
    /* close the file */
    fclose(fp);

    return 0;
}