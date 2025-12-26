/* Write a C program to read an integer n from the console and display the stars pattern as shown below.

If the user inputs a number less than 1 the program should output Invalid input 

Hint: use nested loops, an outer loop for the rows and an inner loop for the columns. 
 
Here is a sample run of the program: 

Enter a value for n:
4
*-*-*-*-
*-*-*-
*-*- 
*-   */

#include <stdio.h>

int main(void)
{
    int n, i, j;
    
    printf("Enter a value for n:\n");

    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid input\n");
        return -1;
    }

    for (i = n; i > 0; i--) 
    {
        for (j = 0; j < i; j++) 
        {
            printf("*-");
        }
            printf("\n");
        }

    return 0;
}