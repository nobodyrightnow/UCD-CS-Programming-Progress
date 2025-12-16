/* Write a function to return the minimum and maximum values in an integer array in the arguments. 
Use the following prototype:

    void min_max(int arr[], int size, int *min, int* max)

Assume that the array contains at least one value; 
there is no requirement to check that this condition holds true in your program. 

Also include a main function in your program which should read the array values from the console,
call the function min_max, and display the minimum and maximum values.

Here is a sample run of the program:
    
Enter the array size:

    5
    Enter 5 integer values:
    1
    2
    3
    4
    5
    The min value is: 1
    The max value is: 5 */

#include <stdio.h>
#define MAX_SIZE 100

void min_max(int arr[], int size, int *min, int *max);

int main(void)
{
    int a[MAX_SIZE];
	int n, i;
	
	/* Read the array size */ 
	printf("Enter the array size:\n");
	scanf("%d", &n);

	/* Read array values */
	printf("Enter %d integer values:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
    
    int max = a[0];
    int min = a[0];

    min_max(a, n, &min, &max);

    printf("The min value is: %d\n", min);
    printf("The max value is: %d\n", max);

    return 0;
}

void min_max(int arr[], int size, int *min, int *max)
{
    int i;
    
    /* Iterate over the array and update min & max accordingly */
    for (i = 0; i < size; i++)
    {
        int num = arr[i];
        
        /* If the number is a new minimum, update min */
        if (num < *min)
        {
            *min = num;
        }
       
        /* If the number is a new maximum, update max */
        if (num > *max)
        {
            *max = num;
        }
    }
}

