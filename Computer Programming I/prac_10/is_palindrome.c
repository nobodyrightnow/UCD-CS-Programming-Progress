/* Write a function to reverse a string. The input string should not be modified in the function and the reversed string should be stored in a separate array. Use the following prototype:

   void reverse(char input[], char reversed[])

Write a second function to check if a string is a palindrome. A palindrome is a string that reads the same forwards and backwards. Use the following prototype:

   bool is_palindrome(char str[])

Note:

The function is_palindrome should call the function reverse to check if the string is a palindrome.
Case should be considered when checking if a string is a palindrome - for example, Racecar is not a palindrome, while racecar is.
Hint: the function strcmp from the string library can be used to check if two strings are equal. 
 
Also include a main function in your program which should read a string from the console using the scanf function, call the function is_palindrome, and display the result.

Here is a sample run of the program:

Enter a string:
racecar
racecar is a palindrome */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LEN 100

/** Write your code here **/
void reverse(char input[], char reversed[]);

bool is_palindrome(char str[]);

int main(void)
{
	char s[MAX_LEN];

	/* read a string */
	printf("Enter a string:\n");
	scanf("%s", s);

	/** Write your code here **/
	if (is_palindrome(s))
	{
	    printf("%s is a palindrome", s);
	}
	else
	{
	    printf("%s is not a palindrome", s);
	}
	
	return 0;
}

/** Write your code here **/
void reverse(char input[], char reversed[])
{
    int i, j = 0;
    
    for (i = strlen(input) - 1; i >= 0; i--)
    {
        reversed[j++] = input[i];
    }
    
    reversed[j] = '\0';
}

bool is_palindrome(char str[])
{
    char reversed[MAX_LEN];
    
    reverse(str, reversed);
    
    if (strcmp(str, reversed) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}