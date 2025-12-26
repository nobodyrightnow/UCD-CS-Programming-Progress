/* Write a C program to read an integer n from the console and compute the sum of all the positive odd numbers up to and including n.

If the user inputs a number less than 1 the program should output "Invalid input"
 
Here is a sample run of the program:

Enter an integer:
5
The sum is 9 */

#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    do
    {
        printf("Enter an integer:\n");

        if (scanf("%d", &n) != 1)
        {
            while (getchar() != '\n');
            n = 0;
        } 
    } while (n < 1);
    
    for (i = n; i > 0; i--)
    {
        if (!(i % 2 == 0))
        {
            sum += i;
        }
    }
    
    printf("The sum is %d", sum);

    return 0;
}