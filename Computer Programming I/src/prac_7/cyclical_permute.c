/* Write to C program to read a string from the console using the scanf function and cyclically permute the characters in the string by 1 step to the left. 
This means to shift the characters in the string one place to the left, with the first character wrapping around to the end of the string. 

For example, if the string entered by the user is ABC, then cyclically permuted by 1 step to the left it becomes BCA.

Assume that the string contains at least one character; there is no requirement to check that this condition holds true in your program.
 
Here is a sample run of the program:

Enter a string:
ABC
The string is now BCA
 
Note:

Take care not to exceed the bounds of the string when writing your program. 
For example, if the string entered by the user is ABC, then your program should only update elements 0, 1, and 2, and not e.g. elements -1 or 3 (element -1 does not exist and, in this example, element 3 is the null character).
A very useful tip is to include an if statement in your loop to check that the bounds of the string have not been exceeded. 
A similar approach can be used when iterating over any array - e.g. arrays of integers, doubles etc. - to check that the bounds of the array have not been exceeded. */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main(void)
{
	char str[MAX_LEN];
    char temp;
    int i;

	/* read a string */
	printf("Enter a string:\n");
	scanf("%s", str);

    /** Write your code here **/
    if (strlen(str) != 1) 
    {
        for (i = 0; i < strlen(str) - 1; i++) 
        {
            temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
    }
    
	/* display output */
	printf("The string is now %s\n", str);

	return 0;
}