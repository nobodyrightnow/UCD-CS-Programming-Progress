/* The Pell sequence of integers is: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985, 2378 ...

It is defined as:

P0=0

P1=1

Pn= 2P(n−1) + P(n−2) (for n>1)

Write a C program to read a positive integer k from the console and display the first k Pell numbers.

If the user inputs a number less than 1 the program should output Invalid input; otherwise, the first k Pell numbers should be displayed on one line with a single space character after each number.

Hint: refer to file Fibonacci Sequence.pdf under section Lecture 7.

Here is a sample run of the program:  

Enter a value for k:
9
0 1 2 5 12 29 70 169 408 */

#include <stdio.h>

void pell_sequence(int n);

int main(void)
{
    int k;

    printf("Enter a value for k:\n");
    
    if (scanf("%d", &k) != 1 || k < 1)
    {
        printf("Invalid input\n");
        return -1;
    }
    
    pell_sequence(k);

    return 0;
}

void pell_sequence(int n)
{
    int i, p0 = 0, p1 = 1, pn;

    printf("%d %d ", p0, p1);
    
    for (i = 2; i < n; i++)
    {
        pn = 2 * p1 + p0;
        printf("%d ", pn);

        p0 = p1;
        p1 = pn;
    }
}

