/* Write a C program to read a string from the console using the fgets function and convert all uppercase letters in the string to lowercase.

To convert an uppercase letter to lowercase, write a function using the following prototype:

   char to_lower(char ch)

If ch is an uppercase letter, the function should return its lowercase equivalent; otherwise, the function should  return the argument unchanged.

Here is a sample run of the program:

Enter a string:
Hello the 2 of YOU!!
The string is now: hello the 2 of you!! */

/* CHANGES: tolower already exists, use it instead */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LEN 100

int main(void)
{
    char s[MAX_LEN];
    int i, length;

    printf("Enter a string:\n");

    fgets(s, MAX_LEN, stdin);

    length = strlen(s);

    /* Remove the \n from the end of the entry */
    if (length > 0 && s[length - 1] == '\n')
    {
        s[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length; i++)
    {
       s[i] = tolower((unsigned char)s[i]);
    }

    printf("The string is now: %s\n", s);

    return 0;
}
