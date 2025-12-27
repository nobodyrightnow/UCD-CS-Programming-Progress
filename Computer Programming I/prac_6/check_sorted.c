/* Write a C program to check if an array of integers is sorted in ascending (i.e. non-decreasing) order.

For example, the following arrays are sorted in ascending order: 
 {1, 1, 33, 49, 75, 75} 
 {-2, -1, -1, 1}
 {7, 7}
 {1}

while the following arrays are not sorted in ascending order: 
 {-1, -2}
 {2, 1, 3}
 {10, 1, 7, 20}
 {1, 2, 3, 4, 3}

Here is a sample run of the program:

Enter the array size:
6
Enter 6 integer values:
1
1
33
49
75
75
Array is sorted */

#include <stdio.h>
#include <stdbool.h>
#define MAX_LEN 100

bool check_sort(int arr[], int length);

int main(void)
{
    int a[MAX_LEN];
    int n, i = 0;
    bool isSorted;

    printf("Enter the array size:\n");
    
    if (!(scanf("%d", &n)) || n < 1)
    {
        printf("Invalid input\n");
        return -1;
    }

    printf("Enter %d integer values:\n", n);

    do
    {
        if (!(scanf("%d", &a[i++])))
        {
            printf("Invalid input\n");
            return -1;
        }
    } while (i < n);
    
    isSorted = check_sort(a, n);

    if (isSorted)
    {
        printf("Array is sorted\n");
    }
    else
    {
        printf("Array is not sorted\n");
    }
}

bool check_sort(int arr[], int length)
{
    int i;

    for (i = 0; i < length - 1; i++)
    {
        if (!(arr[i] <= arr[i + 1]))
        {
            return false;
        }
    }
    
    return true;
}