/* Write a C program to read two positive integers, n1 and n2, from the console. 
The program should output the mean of all the numbers that are evenly divisible by 3 or by 4 in the interval [n1, n2] (i.e. between n1 and n2, inclusive). 

Note:

If the user enters values for n1 and n2 such that n1 < 1 or n2 < 1 or n1 >= n2, the program should display Invalid input and ask the user to re-enter n1 and n2 (and continue to do so until the user's input is valid). 
The mean should be displayed correct to two decimal places. 
If there are no numbers in the interval that are evenly divisible by 3 or by 4, the mean should be set to 0.00.
 
Here is a sample run of the program:

Enter n1:
3
Enter n2:
6
The mean is 4.33 */

#include <stdio.h>

int main(void)
{
    int n1, n2, i, num = 0;
    double mean = 0;

    do
    {
        printf("Enter n1:\n");
        scanf("%d", &n1);
        if (n1 < 1)
        {
            printf("Invalid input\n");
            continue;
        }

        printf("Enter n2:\n");
        scanf("%d", &n2);

        if (n2 < 1 || n1 >= n2)
        {
            printf("Invalid input\n");
            continue;
        }
    } while (n1 < 1 || n2 < 1 || n1 >= n2);
    
    for (i = n1; i <= n2; i++)
    {
        if (i % 3 == 0 || i % 4 == 0)
        {
            num++;
            mean += i;
        }
    }

    if (num == 0)
    {
        mean = 0;
    }
    else
    {
        mean /= num;
    }

    printf("The mean is %.2lf", mean);

    return 0;
}