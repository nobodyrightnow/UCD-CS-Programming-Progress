/* Write a C program to read a string using scanf and an integer i. Replace the character at index i with the null character (i.e. '\0') and display the modified string. Display an error message and terminate the program if i is not a valid index within the string.

Assume that the string contains at least one character; there is no requirement to check that this condition holds true in your program.

Here is a sample run of the program:

Enter a string:
computer
Enter a value for i:
7
The modified string is: compute */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main(void)
{
	char str[MAX_LEN];
	int i;

	/* read a string */
	printf("Enter a string:\n");
	scanf("%s", str);

	/* read the integer i */
	printf("Enter a value for i:\n");
	scanf("%d", &i);


	/** Write your code here **/
	if (i >= strlen(str)|| i < 0)
	{
	    printf("%d is not a valid index\n", i);
	}
	else
	{
	    str[i] = '\0';
	    printf("The modified string is: %s", str);
	}
	
	return 0;
}