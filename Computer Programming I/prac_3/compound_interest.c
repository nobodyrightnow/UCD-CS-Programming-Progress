/* Write a C program to calculate compound interest. Compound interest can be computed using the formula:

A = P(1 + r/100k)^(nk)

where A is an amount of money (in Euro)

The formula calculates how much money A accumulates if some initial amount of money P (the "principal") is deposited in a bank account and left there for n years. 
The simple interest rate is r% per annum and k determines the frequency with which interest is added to the account. 
For example, if k has a value equal to 12, then interest is added every month.

Write a program to compute the amount, A, using this formula. Assume that k = 12 in the program.
The interaction should look like this:

Enter the principal: (the program waits to receive input from the console – e.g. 1000.00)
The program should output Invalid principal if the principal is a negative number and the program should terminate. 

One approach to terminate the program is as follows:

if (principal < 0)
{
    printf("Invalid principal\n");
    return -1;
}

Enter the rate: (the program waits to receive input from the console – e.g. 5)
- Note that 5 means a rate of 5%. 
- The program should output "Invalid rate" if it is not the case that 0 < rate <= 100 and the program should terminate.
Enter the number of years: (the program waits to receive input from the console – e.g. 30)
- The program should output "Invalid number of years" if it is not the case that number of years is > 0 and the program should terminate.

Assuming all the inputs are valid, the program should compute the amount and output: "The amount is 4467.74" */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal, rate, amt;
    int years;

    printf("Enter the principal:\n");
    scanf("%lf", &principal);
    if (principal < 0)
    {
        printf("Invalid principal\n");
        return -1;
    }
    printf("Enter the rate:\n");
    scanf("%lf", &rate);
    if (rate <= 0 || rate > 100)
    {
        printf("Invalid rate\n");
        return -1;
    }
    printf("Enter the number of years:\n");
    scanf("%d", &years);
    if (years <= 0)
    {
        printf("Invalid number of years\n");
        return -1;
    }

    amt = principal * pow((1 + rate/1200), (years * 12));   

    printf("The amount is %.2lf\n", amt);

    return 0;
}