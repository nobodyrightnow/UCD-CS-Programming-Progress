/* Q1. Write a C program which uses two printf statements to display the following:

one
two

Note:
if you do not specify a newline character, \n, in a printf statement, 
then a second printf statement prints directly after a previous printf statement. 
Try including, and then omitting, the newline character and see what happens */

#include <stdio.h>

int main(void)
{
    printf("one\n");
    printf("two\n");

    return 0;
}