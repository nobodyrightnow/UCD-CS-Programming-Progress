/* Q3. Write a C program which uses two printf statements to display the following:

Hello       World!!
Goodbye     World!!

The gap between the words is created by two tab characters. 
Use \t to display a tab character in a printf statement (similar to \n to display a newline character). */

#include <stdio.h>

int main(void)
{
    printf("Hello\t\tWorld!!\n");
    printf("Goodbye\t\tWorld!!\n");

    return 0;
}