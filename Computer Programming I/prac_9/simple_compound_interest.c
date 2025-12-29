/* Write a function to calculate both the simple and compound interest given the principal, rate, and time (in years). The function should return the simple and compound interest in the arguments and use the following  prototype: 

   void calculate_interest(double p, double r, int t, double *simple, double *compound)

Also include a main function in your program which should read the principal, rate, and time from the console, call the function calculate_interest, and display the simple and compound interest.
 
The formulae to calculate simple and compound interest are:

   simple interest=(principal×rate×time)/100

   compound interest=(principal×(1+rate/100)^time−principal

Here is a sample run of the program: 

Enter the principal, rate, and time:
1000.0
5.0
2
The simple interest is: 100.00
The compound interest is: 102.50 */

#include <stdio.h>
#include <math.h>

void calculate_interest(double p, double r, int t, double *simple, double *compound);

int main(void)
{
   double principal, rate, smp, cmp;
   int time;

   printf("Enter the principal, rate, and time:\n");
   scanf("%lf%lf%d", &principal, &rate, &time);

   calculate_interest(principal, rate, time, &smp, &cmp);

   printf("The simple interest is: %.2lf\n", smp);
   printf("The compound interest is: %.2lf\n", cmp);

   return 0;
}

void calculate_interest(double p, double r, int t, double *simple, double *compound)
{
   *simple = (p * r * t) / 100;
   *compound = (p * pow((1 + r/100), t) - p);
}