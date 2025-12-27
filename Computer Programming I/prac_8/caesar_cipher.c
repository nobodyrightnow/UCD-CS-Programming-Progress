/* Write a C program to implement a Caesar cipher, in which each lowercase letter in a string is replaced by a lowercase letter some fixed number of positions, k, up or down the alphabet.

For example, if k = 2:

All occurrences of 'a' are replaced by 'c'.
All occurrences of 'b' are replaced by 'd'.
...
All occurrences of 'y' are replaced by 'a'.
All occurrences of 'z' are replaced by 'b'. 
For example, if k = -2:

All occurrences of 'a' are replaced by 'y'.
All occurrences of 'b' are replaced by 'z'.
...
All occurrences of 'y' are replaced by 'w'.
All occurrences of 'z' are replaced by 'x'.

Note that only the lowercase letters in the string should be modified; all other characters in the string should not be modified.

Use the fgets function to read the string and the scanf function to read the value of k.

 
Here is a sample run of the program:

Enter a string:
Hello World!
Enter a value for k:
2
The encrypted message is: Hgnnq Wqtnf!

 
Hint:
For k > 0, the following expression shifts a lowercase letter ch by k positions down the alphabet:
   ch = 'a' + (ch - 'a' + k) % 26;
For example, if ch = 'b' and k = 2, the above expression assigns 'd' to ch. A similar expression can be derived to shift a lowercase letter up the alphabet by k positions. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100

int main(void)
{
	char msg[MAX_LEN];
	int k;
	
	/* read the string using fgets - at most MAX_LEN - 1
	   characters will be read; the null terminator is 
	   added to the end of the string */
	printf("Enter a string:\n");
	fgets(msg, MAX_LEN, stdin);

	/* read k */
	printf("Enter a value for k:\n");
	scanf("%d", &k);

    /** Write your code here **/
    char ch;
    int len = strlen(msg);
    for (int i = 0; i < len; i++)
    {
        ch = msg[i];
        if (islower(ch))
        {
            ch = 'a' + ((ch - 'a' + k + 26) % 26);
        }
        msg[i] = ch;
    }

	/* display output */
	printf("The encrypted message is: %s", msg);
		
	return 0;
}