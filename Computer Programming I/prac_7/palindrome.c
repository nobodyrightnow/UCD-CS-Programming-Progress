/* Write to C program to read a string from the console using the scanf function and check if the string is a palindrome.

A string is said to be a palindrome if it reads the same backward or forward. For example, the strings racecar, radar, abba, 121, and a are all palindromes, while the strings on, cat, alba, 12331, and 123421 are not.

Assume that the string contains at least one character; there is no requirement to check that this condition holds true in your program. 

 
Here is a sample run of the program:

Enter a string:
racecar
racecar is a palindrome */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main(void)
{
    char str[MAX_LEN];
    char reverse_str[MAX_LEN];

    printf("Enter a string:\n");
    scanf("%s", str);
    int i, j = strlen(str) - 1;
    
    for (i = 0; i < strlen(str); i++)
    {
        reverse_str[i] = str[j--];
    }
    
    if (!strcmp(str, reverse_str)) 
    {
        printf("%s is a palindrome", str);
    }
    else
    {
        printf("%s is not a palindrome", str);
    }
    
    return 0;
}