/* Write a C program to read two strings from the console using the scanf function and append the second string to the first string. 

Your program should check that there is enough space in the first string to append all the characters from the second string – if there is not enough space, append the maximum possible number of characters from the second string to the first string.

Note that the maximum number of elements (MAX_LEN) in both strings is set to 10 in the code provided. Please do not change this - if you do, your program will not pass all the test cases shown below. For example, in the last two test cases, there is not enough space in the first string to append all/any characters from the second string

Further, note that the second string should not be modified by the program.

Assume that both strings contain at least one character; there is no requirement to check that this condition holds true in your program.

 
The following algorithm can be used to solve this problem:
1.
 	
Iterate to the end of the first string – i.e. find the position of
the null character '\0' in the first string.
2.
 	
Starting at this position, insert characters from the second string
into the first string (provided that there is enough space).
3.
 	
Finally, insert the null character into the first string.
 	 	 
Here is a sample run of the program:

Enter the first string:
Day
Enter the second string:
s
The strings are now Days and s */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 10

int main(void)
{
	char str1[MAX_LEN];
	char str2[MAX_LEN]; 


	/* read the first string */
	printf("Enter the first string:\n");
	scanf("%s", str1);

	/* read the second string */
	printf("Enter the second string:\n");
	scanf("%s", str2);
	
	
	/** Write your code here **/
	int space = 9 - strlen(str1);
	strncat(str1, str2, space);

	/* display output */
	printf("The strings are now %s and %s\n", str1, str2);

	return 0;
}