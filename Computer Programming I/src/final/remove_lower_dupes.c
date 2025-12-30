/* Write a C function to remove duplicate lowercase letters from a string, keeping only the first occurrence of each lowercase letter in the string. All other characters (e.g. uppercase letters, punctuation characters, etc.) should be kept in the string. Use the following prototype: 

  void remove_duplicate_lowercase(char s[])
 
Examples:

For the input string abba the modified string should be ab
For the input string ABba the modified string should be ABba
For the input string Hello World! the modified string should be Helo Wrd!
For the input string HELLO world! the modified string should be HELLO world!
 
Also include a main function in your program which should read a string from the console using the fgets function, call the function remove_duplicate_lowercase, and display the modified string as shown below.

Here is a sample run of the program:

Enter a string:
abba
The modified string is: ab */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100

void remove_duplicate_lowercase(char s[]);

int main(void)
{
	char str[MAX_LEN];

	/* read the string using fgets - at most MAX_LEN - 1 
	   characters will be read; the null terminator is 
	   added to the end of the string */
	printf("Enter a string:\n");
	fgets(str, MAX_LEN, stdin);


    /** Write your code here **/
    remove_duplicate_lowercase(str);

	/* display output */
	printf("The modified string is: %s\n", str);
	
	return 0;
}

void remove_duplicate_lowercase(char s[])
{
    /** Write your code here **/
    int found[26] = {0};
    int i, j, letter, num;
    int size = strlen(s);
    
    for (i = 0; i < size; i++)
    {
        letter = s[i];
        if (islower(letter))
        {
            num = letter - 'a';
            if (!found[num])
            {
                found[num]++;
            }
            else
            {
                for (j = i + 1; j <= size; j++)
                {
                    s[j-1] = s[j];
                }
                i--;
            }
        }
    }
}