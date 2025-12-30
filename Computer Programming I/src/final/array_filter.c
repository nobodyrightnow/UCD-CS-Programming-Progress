/* Write a C program that reads in an integer array a[] and an integer value k from the console and outputs the mean of the values in a[] that are divisible by k. If there are no values in a[] that are divisible by k, the mean should be set to zero.

As shown below, the mean should be displayed correct to one decimal place.

You can assume that k is greater than zero and that the number of values in the array is greater than zero; there is no requirement to check that these conditions hold true in your program. 

Examples:

(i)	If a[] = {1, 2, 3, 4, 5, 6} and k = 1, the mean is 3.5   (i.e.1+2+3+4+5+66)
(ii)	If a[] = {1, 2, 3, 4, 5, 6} and k = 2, the mean is 4.0   (i.e.2+4+63)
(iii)	If a[] = {1, 2, 3, 4, 5, 6} and k = 5, the mean is 5.0   (i.e.51)
(iv)	If a[] = {1, 2, 3, 4, 5, 6} and k = 8, the mean is 0.0   (
i.e. there are no values in a[] that are divisible by 8)
 
Here is a sample run of the program:

Enter the array size:
6
Enter 6 integer values:
1 2 3 4 5 6
Enter the value for k:
1
The mean is: 3.5 */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
	int a[MAX_SIZE];
	int size, i, k;

	/* read the array size */ 
	printf("Enter the array size:\n");
	scanf("%d", &size);
	
	/* read array values */
	printf("Enter %d integer values:\n", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}

	/* read the value for k */
	printf("Enter the value for k:\n");
	scanf("%d", &k);

	/** Write your code here **/
	double sum = 0.0;
	int amt = 0, num;
	for (i = 0; i < size; i++)
	{
	    num = a[i];
	    if (num % k == 0) 
	    {
	        sum += num;
	        amt++;
	    }
	}
	
	double mean;
	if (amt == 0)
	{
	    mean = 0.0;
	}
	else
	{
	    mean = sum / amt;
	}
	
	printf("The mean is: %.1lf", mean);

	return 0;
}