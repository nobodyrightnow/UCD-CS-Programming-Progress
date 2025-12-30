/* Write a C program to filter all values in an array of integers that are divisible by 2 or by 3. 

Your program should read values from the console into an array a[] and use a second array b[] into which to store the filtered values.

At the end of the filtering process, array a[] should not be modified and array b[] should contain those values in a[] that are are divisible by 2 or by 3.

The program should output the values in both arrays a[] and b[] as shown below.

Here is a sample run of the program:  

Enter the number of elements:
5
Enter 5 values:
99
17
21
12
83
a[]: 99 17 21 12 83
b[]: 99 21 12 */

#include <stdio.h>
#define MAX_LEN 100

int main(void)
{
    int a[MAX_LEN], b[MAX_LEN];
    int n;
    int i = 0, j = 0, num;

    printf("Enter the number of elements:\n");
    
    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input\n");
        return -1;
    }

    printf("Enter %d values:\n", n);

    do
    {
        if (scanf("%d", &a[i++]) != 1)
        {
            printf("Invalid input\n");
            return -1;
        }    
    } while (i < n);

    printf("a[]: ");

    for (i = 0; i < n; i++)
    {
        num = a[i];
        printf("%d ", num);
        if (num % 2 == 0 || num % 3 == 0)
        {
            b[j++] = num;
        }
    }
    printf("\nb[]: ");
    for (i = 0; i < j; i++)
    {
        num = b[i];
        printf("%d ", num);
    }

    return 0;
}