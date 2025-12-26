/* Write a C program to read two integers, a and b, and evaluate a XOR b. 

Recall that the value 0 corresponds to false and the value 1 (or any nonzero value) corresponds to true.

Here is a sample run of the program:

Enter a value for a:
0
Enter a value for b:
0
0 XOR 0 is 0 */

#include <stdio.h>

int main(void)
{
    int a, b, xor;
    
    printf("Enter a value for a:\n");

    while (scanf("%d", &a) != 1)
    {
        while (getchar() != '\n');
        printf("Enter a value for a:\n");
    }

    printf("Enter a value for b:\n");

    while (scanf("%d", &b) != 1)
    {
        while (getchar() != '\n');
        printf("Enter a value for b:\n");
    }

    int a_temp, b_temp;

    if (a != 0)
    {
        a_temp = 1;
    }
    if (b != 0)
    {
        b_temp = 1;
    }

    xor = a_temp ^ b_temp;

    printf("%d XOR %d is %d", a, b, xor);

    return 0;
}