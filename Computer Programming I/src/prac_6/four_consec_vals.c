/* Write a C program to check if an array of integers contains (at least one instance of) four consecutive equal values.

For example, the following arrays do contain at least one instance of four consecutive equal values: 
 {-2, -2, -2, -2}
 {6, 1, 3, 29, 29, 29, 29, 10}

while the following arrays do not contain four consecutive equal values: 
 {1, 1, 1}
 {7, 7, 7, 4, 7}

Here is a sample run of the program:

Enter the array size:
4
Enter 4 integer values:
-2
-2
-2
-2
Array contains four consecutive equal values */

#include <stdio.h>
#include <stdbool.h>
#define MAX_LEN 100

bool check_four_consec(int arr[], int length);

int main(void)
{
    int n, i = 0;
    int a[MAX_LEN];
    bool four_consec;

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

    four_consec = check_four_consec(a, n);
    
    if (four_consec)
    {
        printf("Array contains four consecutive equal values");
    }
    else
    {
        printf("Array does not contain four consecutive equal values");
    }

    return 0;
}

bool check_four_consec(int arr[], int length)
{
    int i;

    if (length >= 4)
    {
        for (i = 0; i < length - 3; i++)
        {
            if ((arr[i] == arr[i+1]) && (arr[i+1] == arr[i+2]) && (arr[i+2] == arr[i+3]))
            {
                return true;
            }
        }
    }
        
    return false;
}