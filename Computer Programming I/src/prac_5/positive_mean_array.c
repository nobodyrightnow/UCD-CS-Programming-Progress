/* Write a C program to compute the mean of a sequence of non-negative integer values which are read from the console.

The program should allow the user to input an arbitrary number of values, store these values in an array, and use a sentinel value of < 0 (i.e. any negative value) to denote that the user has finished inputting values. 

The mean should be printed correct to one decimal place. If the first value input by the user is < 0, the mean should be set to 0.0.

Here is a sample run of the program:  

Enter an integer value:
2
Enter an integer value:
7
Enter an integer value:
-1
The mean is 4.5 */

#include <stdio.h>
#define MAX_LEN 100

double arr_mean(int arr[], int length);

int main(void)
{
    double mean;
    int a[MAX_LEN], n, i = 0;

    do
    {
        printf("Enter an integer value:\n");
        scanf("%d", &n);

        if (n >= 0)
        {
            a[i++] = n;
        }
    } while (n >= 0);

    mean = arr_mean(a, i);

    printf("The mean is %.1lf\n", mean);
    
    return 0;
}

double arr_mean(int arr[], int length)
{
    double sum = 0.0;
    
    int i;
    
    for (i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    return sum / length;
}