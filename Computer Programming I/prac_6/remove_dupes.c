/* Write a C program to remove consecutive duplicate values from an array of integers. 

The array should be modified in-place; i.e. the array as input from the console should be modified as shown in the following  examples: 

  Input array: {5, 5, 5, -8, 4, 4, -2, -2, -2, -2} 
  Modified array: {5, -8, 4, -2}

  Input array: {10, 10, 10} 
  Modified array: {10}

  Input array: {20, -5, -5, -8} 
  Modified array: {20, -5, -8}

  Input array: {1, 2, 1, 2} 
  Modified array: {1, 2, 1, 2}

  Input array: {99} 
  Modified array: {99}

Here is a sample run of the program:

Enter the array size:
10
Enter 10 integer values:
5
5
5
-8
4
4
-2
-2
-2
-2
Modified array: 5 -8 4 -2 */

#include <stdio.h>
#define MAX_LEN 100

int remove_dupes(int arr[], int length);

int main(void)
{
    int a[MAX_LEN];
    int n, i = 0;
    int new_len;

    printf("Enter the array size:\n");

    if (!scanf("%d", &n) || n < 1)
    {
        printf("Invalid input");
        return -1;
    }

    printf("Enter %d integer values:\n", n);

    do
    {
        if (!scanf("%d", &a[i++]))
        {
            printf("Invalid input");
            return -1;
        }
    } while (i < n);

    new_len = remove_dupes(a, n);

    printf("Modified array: ");

    for (i = 0; i < new_len; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int remove_dupes(int arr[], int length)
{
   int i, j = 1;
    
    for (i = 1; i < length; i++)
    {
        if (arr[i] != arr[i-1])
        {
            arr[j++] = arr[i];
        }
    }
    
    return j;
}