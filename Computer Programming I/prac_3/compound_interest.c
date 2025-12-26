/* The program should interact with the user to determine if they are interested in computing the amount, A, or the principal, P.
Assume that k = 12 in the program.

Use the following formulae to compute the amount A and principal P:

A = P(1 + r/100k)^nk
P = A(1 + r/100k)^-nk

The program should first ask the user if they wish to compute the amount or the principal and then input the three known values and compute the unknown value.
The interaction should look like this:

Enter 1 to compute the Amount or 2 to compute the Principal:
The user now inputs either 1 or 2. 
The program should output "Invalid option" if none of these options is selected and the program should terminate (see the code snippet below).
For the purpose of this example interaction, assume the user selects 1.

Enter the principal: (the program waits to receive input from the console – e.g. 1000.00)
The program should output "Invalid principal" if the principal is a negative number and the program should terminate.

Enter the rate: (the program waits to receive input from the console – e.g. 5)
Note that 5 means a rate of 5%. The program should output Invalid rate if it is not the case
that 0 < rate <= 100 and the program should terminate.
Enter the number of years: (the program waits to receive input from the console – e.g. 30)
The program should output Invalid number of years if it is not the case that number of years is > 0 and the program should terminate.
Assuming all the inputs are valid, the program should compute the amount and output:
The amount is 4467.74

The following code snippet outlines one approach to handling the initial user selection:

int option;
...
scanf("%d", &option);
if (option < 1 || option > 2)
{
    printf("Invalid option\n");
    return -1;
}

if (option == 1)
{
    ...
}
else
{
    ...
} */

#include <stdio.h>
#include <math.h>

double compute_amt(void);
double compute_principal(void);

int main(void)
{
    int option;

    printf("Enter 1 to compute the Amount or 2 to compute the Principal:\n");
    scanf("%d", &option);

    if (option < 1 || option > 2)
    {
        printf("Invalid option\n");
        return -1;
    }
    else if (option == 1)
    {
        double amt = compute_amt();
        if (amt == -1)
        {
            return -1;
        }
        printf("The amount is %.2lf", amt);
    }
    else
    {
        double p = compute_principal();
        if (p == -1)
        {
            return -1;
        }
        printf("The principal is %.2lf", p);
    }
    
    return 0;
}

double compute_amt(void)
{
    double principal, rate;
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

    return principal * pow((1 + rate/1200), (years * 12));   
}

double compute_principal(void)
{
    double amount, rate;
    int years;

    printf("Enter the amount:\n");
    scanf("%lf", &amount);
    if (amount < 0)
    {
        printf("Invalid amount\n");
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

    return amount * pow((1 + rate/1200), (years * 12));   
}