/* Write a function to find the union of two integer arrays, arr1[] and arr2[]. Values less than 0 or greater than 99 should be excluded from the union and the union should not contain any duplicate values. The values in the union should be stored in an integer array, arranged in ascending order from smallest to largest. Use the following function prototype:

   void find_union(int a1[], int size1, int a2[], int size2, int result[], int *size)
 
For example if arr1[] contains {50, 45, 33, 7, -6, 33} and arr2[] contains {-6, 100, 33, 80}, then the union is {7, 33, 45, 50, 80}.

Hint:

In function find_union, create an integer array present[] of size 100 (i.e. one element for each value between 0 and 99, inclusive) and initialise all elements to 0. 
Iterate over the values in the array pointed to by a1 and set the corresponding elements in array present[] to 1 (and do likewise for the array pointed to by a2).
Iterate over the array present[] - if present[i] is equal to 1, copy i into the array pointed to by result. 
 
Also include a main function in your program which should read the values for both arrays from the console, call the function  find_union, and display the values in the union. If there are no values in the union the program should display empty. 
 
Here is a sample run of the program:

Enter the size of the first array:
6
Enter 6 integer values:
50
45
33
7
-6
33
Enter the size of the second array:
4
Enter 4 integer values:
-6
100
33
80
The union is: 7 33 45 50 80  */

#include <stdio.h>
#define MAX_SIZE 100


/** Write your code here **/
void find_union(int a1[], int size1, int a2[], int size2, int result[], int *size);

int main(void)
{
	int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];
	int size1, size2, i;
	
	/* read the size of the first array */ 
	printf("Enter the size of the first array:\n");
	scanf("%d", &size1);

	/* read values into the first array */
	printf("Enter %d integer values:\n", size1);
	for (i = 0; i < size1; i++)
	{
		scanf("%d", &arr1[i]);
	}

	/* read the size of the second array */ 
	printf("Enter the size of the second array:\n");
	scanf("%d", &size2);

	/* read values into the second array */
	printf("Enter %d integer values:\n", size2);
	for (i = 0; i < size2; i++)
	{
		scanf("%d", &arr2[i]);
	}

	/** Write your code here **/
	int result[100] = {0};
	int result_size = 0;
	
	find_union(arr1, size1, arr2, size2, result, &result_size);
    
    printf("The union is: ");
    
    if (result_size == 0)
    {
        printf("empty");
    }
    else
    {
        for (i = 0; i < 100; i++)
        {
            if (result[i] != 0)
            {
                if (result[i] == -1)
                {
                    printf("0 ");
                }
                else 
                {
                    printf("%d ", result[i]);    
                }
            }
        }  
    }
	
    return 0;
}

/** Write your code here **/
void find_union(int a1[], int size1, int a2[], int size2, int result[], int *size)
{
    int present[100] = {0};
    int i;
    for (i = 0; i < size1; i++)
    {
        if (a1[i] >= 0 && a1[i] < 100)
        {
            if (present[a1[i]] == 0)
            {
                present[a1[i]]++;
                result[a1[i]] = a1[i];
                (*size)++;
            }
        }
    }
    
    for (i = 0; i < size2; i++)
    {
        if (a2[i] >= 0 && a2[i] < 100)
        {
            if (present[a2[i]] == 0)
            {
                if (a2[i] == 0)
                {
                    result[a2[i]] = -1;
                }
                else
                {
                    result[a2[i]] = a2[i];
                    (*size)++;   
                }
            }
        }
    }
}