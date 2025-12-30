/* Write a C program to read a non-negative decimal integer n from the console and display the base 2 representation of n. For example, if n = 8, the program should display 1000

If the user inputs a number less than 0 the program should output Invalid input
 
An algorithm to compute the base 2 representation of a number n is as follows:

  Declare integer variable num and initialise num to n.
  Declare integer variable digit.
  Declare an integer array a[] with 32 elements to hold the binary digits. 
  All elements in a[] should be initialised to 0.

  Repeat until num == 0:
    Assign to digit the remainder of the division of num by 2.
    Assign to num the result of the integer division of num by 2.
    Save digit into the next location in array a[].
  End Repeat

  Display (the relevant elements of) array a[].
 	 
Example: to compute the binary representation of 19, we do the following: 
 	19/2	=	9 remainder 1
 	9/2	=	4 remainder 1
 	4/2	=	2 remainder 0
 	2/2	=	1 remainder 0
 	1/2	=	0 remainder 1
Reading the remainders from bottom to top, the binary representation of 19 is 10011 and the array a[] should contain:

  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 1 1

Here is a sample run of the program:  

Enter a value for n:
19
19 in base 2 is 10011 */

#include <stdio.h>
#define MAX_LEN 32

void dec_to_bin(int num, int bin[]);

int main(void)
{
  int n, bin[MAX_LEN];

  printf("Enter a value for n:\n");

  if (scanf("%d", &n) != 1 || n < 0)
  {
    printf("Invalid input\n");
    return -1;
  }

  printf("%d in base 2 is ", n);

  dec_to_bin(n, bin);

  return 0;
}

void dec_to_bin(int num, int bin[])
{
  int i = 31, digit;

  /* Constructing the array */
  for (num; num > 0; num /= 2)
  {
    bin[i--] = num % 2;
  }
  /* Printing the array */
  for (i = i + 1; i < 32; i++)
  {
    digit = bin[i];
    printf("%d", digit);
  }
}

