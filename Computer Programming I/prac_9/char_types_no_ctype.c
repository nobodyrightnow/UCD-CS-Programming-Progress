/* [Rewrite of Practical 7 Question 2 using functions]

Write to C program to read a string from the console using the scanf function and display: 

(i)	The number of uppercase and lowercase letters in the string.
(ii)	The number of digits (i.e.'0', '1', ..., '9') in the string.
(iii)	The number of other characters in the string.
 	 
In your program, write functions using the following prototypes to check if a character is (i) an uppercase or uppercase letter or (ii) a digit:

   bool is_letter(char ch)
   bool is_digit(char ch)

Note: the ctype library should not be used in your program.

Assume that the string contains at least one character; there is no requirement to check that this condition holds true in your program. */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_LEN 100

/** Write your code here **/
bool is_letter(char ch);

bool is_digit(char ch);

int main(void)
{
	char str[MAX_LEN];
	
	/* read a string */
	printf("Enter a string:\n");
	scanf("%s", str);

	/** Write your code here **/
	int letters = 0;
	int digits = 0;
	int other = 0;
	
	for (int i = 0; i < strlen(str); i++)
	{
	    if (is_letter(str[i])) 
	    {
	        letters++;
	    }
	    else if (is_digit(str[i]))
	    {
	        digits++;
	    }
	    else
	    {
	        other++;
	    }
	}
	
	printf("Letters: %d\nDigits: %d\nOther: %d\n", letters, digits, other);
	
	return 0;
}

/** Write your code here **/
bool is_letter(char ch)
{
    return ( (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) );
}

bool is_digit(char ch)
{
    return (ch >= 48 && ch <= 57);
}
