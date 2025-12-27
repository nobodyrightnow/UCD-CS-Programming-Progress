/* Write a C program to read two strings from the console using the fgets function and display the set of lowercase letters - arranged in alphabetic order - that appear at least once in both strings.

For example:

The lowercase letter 'e' appears at least once in both "cheese" and "bread".
The lowercase letters 'e', 'o', 'r', and 's' appear at least once in both "heroes!!" and "zeros!!".
The lowercase letters 'a', 'd', 'g', 'n', 'o', 's', and 't' appear at least once in both "Cats and dogs" and "Dogs and cats".
No lowercase letters appear in both "BIRDS CAN FLY" and "birds can fly".
The following is one algorithm to solve this problem:

Create an integer array common[] of size 26 (i.e. one element for each lowercase letter) and initialise all elements to 0.
Use an outer loop to iterate over the characters in the first string and an inner loop to iterate over the characters in the second string. For each lowercase letter in the first string, check if it appears in the second string.
If a given lowercase letter appears at least once in both strings, set the corresponding element in common[] to 1 – i.e. set:
common[0] to 1 if the letter 'a' appears at least once in both strings,
common[1] to 1 if the letter 'b' appears at least once in both strings,
…
common[25] to 1 if the letter 'z' appears at least once in both strings.
To display the output, iterate over the array common[] and display the lowercase letters corresponding to each element with a value equal to 1.
As shown below, the program should display the lowercase letters that appear at least once in both strings on a single line, arranged in alphabetical order, with each letter separated by a single space character. If there are no such letters, the program should display none.

Here is a sample run of the program:

Enter the first string:
cheese
Enter the second string:
bread
Common lowercase letters: e */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_LEN 100

int main(void)
{
	char str1[MAX_LEN];
	char str2[MAX_LEN];

	/* read the first string using fgets - at most 
	   MAX_LEN - 1 characters will be read; the null 
	   terminator is added to the end of the string */
	printf("Enter the first string:\n");
	fgets(str1, MAX_LEN, stdin);

	/* read the second string using fgets */
	printf("Enter the second string:\n");
	fgets(str2, MAX_LEN, stdin);


    /** Write your code here **/
    printf("Common lowercase letters: ");
    bool none = true;
    for (int i = 0; i < 26; i++)
    {
        if (strchr(str1, i + 'a') != NULL && strchr(str2, i + 'a'))
        {
            printf("%c ", i + 'a');
            none = false;
        }
    }
    
    if (none)
    {
        printf("none");
    }
	
	return 0;
}
