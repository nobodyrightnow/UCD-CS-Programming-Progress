/* Write a C function to check if an integer is prime using the following prototype:

   bool is_prime(int num)

To check if an integer, n, is prime, check if it is divisible by 2, 3, 4, and so on up to and including sqrt(n); if a divisor is found, then n is not prime (note that any number <= 1 is not prime).

Also include a main function in your program. The main function should read an integer, k, from the console and display the first k prime numbers (all on a single line, with a single space character after each number).

Here is a sample run of the program:

Enter a value for k:
4
The first 4 prime numbers are: 2 3 5 7 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/** Write your code here **/
bool is_prime(int num);

int main(void)
{
	int k, test_num = 2;

	/* read a value for k */
	printf("Enter a value for k:\n");
	scanf("%d", &k);

	/** Write your code here **/
	printf("The first %d prime numbers are: ", k);
	
    for (int i = 0; i < k; test_num++)
	{
	    if (is_prime(test_num))
	    {
	        printf("%d ", test_num);
	        i++;
	    }
	}
	
	return 0;
}

/** Write your code here **/
bool is_prime(int num)
{
    bool prime = 1;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            prime = 0;
        }
    }
    return prime;
}