/* Write a C program to read a lowercase letter and display the corresponding uppercase letter.

Note: to read and print a character, use the format specifier "%c" in the scanf and printf functions.

Hint: recall that characters are really just integers in C. Refer to the ASCII Table shown in Lecture 4 and try to identify a pattern in the decimal representations for the lowercase and uppercase letters. For example, the decimal representations for the letters a and A are 97 and 65, respectively, while those for the letters b and B are 98 and 66, respectively.

Here is a sample run of the program: 

Enter a lowercase letter:
a
The corresponding uppercase letter is: A */

#include <stdio.h>

int main(void)
{
    char lower, upper;

    do
    {
        printf("Enter a lowercase letter:\n");

        scanf(" %c", &lower);

        while (getchar() != '\n');
        
    } while (lower < 'a' || lower > 'z');

    upper = lower - 32;

    printf("The corresponding uppercase letter is: %c", upper);
}