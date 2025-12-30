/* Write to C program to read a string from the console using the scanf function and display: 

(i)	The number of uppercase and lowercase letters in the string.
(ii)	The number of digits (i.e.'0', '1', ..., '9') in the string.
(iii)	The number of other characters in the string.
 	 
Assume that the string contains at least one character; there is no requirement to check that this condition holds true in your program.
 
Here is a sample run of the program:

Enter a string:
Hey_you!
Letters: 6
Digits: 0
Other: 2 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100

int main(void)
{
	char str[MAX_LEN];

	/* read a string */
	printf("Enter a string:\n");
	scanf("%s", str);

	/** Write your code here **/
	int i, letters = 0, digits = 0, other = 0;
    
	for (i = 0; i < strlen(str); i++)
	{
	    if (isalpha(str[i]))
	    {
	        letters++;
	    }
	    else if (isdigit(str[i]))
	    {
	        digits++;
	    }
	    else
	    {
	        other++;
	    }
	}
	
	printf("Letters: %d\n", letters);
	printf("Digits: %d\n", digits);
	printf("Other: %d\n", other);
	
	return 0;
}