/* Write a C function to find the indices of the first and last occurrences of a target value v in an integer array. The function should return the indices in the arguments. If the target value is not present in the array, both indices should be set to −1. Use the following prototype: 

   void find_occurrences(int arr[], int size, int value, int *first, int *last)
 
Also include a main function in your program which should read the target value v and an integer array a[] from the console, and display the output as shown below:

(i)	If v does not appear in the array, the program should output:
  The first index is: -1
  The last index is: -1 
(ii)	If v appears once in the array (say at index 3), the program should output:
  The first index is: 3
  The last index is: 3
(iii)	If v appears more than once in the array (say at indices 0, 1, and 4), the program should output:
  The first index is: 0
  The last index is: 4
 
Note: the array a[] should not be modified by your program. The program should also output the array as entered by the user to check that the array has not been modified.

You can assume that the number of values in the array is greater than zero; there is no requirement to check that this condition holds true in your program. 

Here is a sample run of the program:

Enter the target value:
2
Enter the array size:
5
Enter 5 integer values:
1 2 3 2 1
The array is: 1 2 3 2 1 
The first index is: 1
The last index is: 3 */

#include <stdio.h>
#define MAX_SIZE 100

void find_occurrences(int arr[], int size, int value, int *first, int *last);

int main(void)
{
	int a[MAX_SIZE];
	int size, i, v;
	int first_index, last_index;
	
	/* read the target value */
	printf("Enter the target value:\n");
	scanf("%d", &v);

	/* read the array size */ 
	printf("Enter the array size:\n");
	scanf("%d", &size);
	
	/* read array values */
	printf("Enter %d integer values:\n", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}

	/** Write your code here **/
	find_occurrences(a, size, v, &first_index, &last_index);
	
	/* write out the result */
	printf("The array is: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("The first index is: %d\n", first_index);
	printf("The last index is: %d\n", last_index);

	return 0;
}

void find_occurrences(int arr[], int size, int value, int *first, int *last)
{
	/** Write your code here **/
	int element, i, no_occurrences = 1;
	
    for (i = 0; i < size; i++)
    {
        element = arr[i];
        
        if (element == value && no_occurrences == 1)
        {
            *first = i;
            no_occurrences = 0;
        }
        if (element == value && no_occurrences == 0)
        {
            *last = i;
        }
    }

    if (no_occurrences)
    {
        *first = -1;
        *last = -1;
    }
}