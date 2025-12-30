/* Write a C program to read a student's exam mark (an integer between 0 and 100, inclusive) and assign a letter grade based on the following scale:

A for marks 90-100 (inclusive)
B for marks 80-89  (inclusive)
C for marks 70-79  (inclusive)
D for marks 60-69  (inclusive)
F for marks below 60 

In your program, use a switch statement to assign the grade.

Hint: Use integer division to simplify the switch cases - divide the input mark by 10 to group the ranges (e.g. 80-89 becomes 8).

Here is a sample run of the program: 

Enter the mark:
91
A mark of 91 corresponds to grade A */

#include <stdio.h>

int main(void)
{
    int mark;
    char grade;

    printf("Enter the mark:\n");

    if (!(scanf("%d", &mark)) || mark < 0 || mark > 100)
    {
        printf("Invalid input\n");
        return -1;
    }

    switch (mark / 10)
    {
        case 10:
        {
            grade = 'A';
            break;
        }
        case 9:
        {
            grade = 'A';
            break;
        }
        case 8:
        {
            grade = 'B';
            break;
        }
        case 7:
        {
            grade = 'C';
            break;
        }
        case 6:
        {
            grade = 'D';
            break;
        }
        default:
        {
            grade = 'F';
        }
    }
    
    printf("A mark of %d corresponds to grade %c", mark, grade);

    return 0;
}