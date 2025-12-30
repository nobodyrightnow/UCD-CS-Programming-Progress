/* Write a C program to read a temperature in Celsius and display the corresponding temperature in Fahrenheit. The formula for the conversion is: F = 9C/5 + 32

The temperature in Fahrenheit should be displayed correct to two decimal places (in your printf statement, use the following format specifier %.2lf).

Here is a sample run of the program: 

Enter a temperature in Celsius:
-2.5 
The temperature in Fahrenheit is: 27.50 */

#include <stdio.h>

/* Function prototypes */
void c_to_f(double c, double *f);
void f_to_c(double f, double *c);

/* Main */
int main(void)
{
    double temp_f, temp_c;
    int cmd;
    
    /* Infinite loop only ended by entering 3 */
    while (1)
    {
        /* Options */
        printf("1) Convert Celsius to Fahrenheit\n");
        printf("2) Convert Fahrenheit to Celsius\n");
        printf("3) End\n");

        /* Request the user to choose a function (1-3) until they enter a valid input */
        do 
        {
            printf("\nPlease choose a function:\n");
            
            /* If the scanf statement doesn't find an integer in the input, */
            if (scanf("%d", &cmd) != 1)
            {
                /* Clear the std input */
                while (getchar() != '\n');
                /* Force a loop */
                cmd = -1;
            }
        } while (cmd < 1 || cmd > 3);

        /* Switch statement for different cmds */
        switch (cmd)
        {
            /* C --> F */
            case 1:
                printf("\nEnter a temperature in Celsius:\n");
                scanf("%lf", &temp_c);
    
                c_to_f(temp_c, &temp_f);

                printf("\nThe temperature in Fahrenheit is: %.2lf\n\n", temp_f);
                break;
            /* F --> C */
            case 2:
            {
                printf("\nEnter a temperature in Fahrenheit:\n");
                scanf("%lf", &temp_f);

                f_to_c(temp_f, &temp_c);

                printf("\nThe temperature in Celsius is: %.2lf\n\n", temp_c);
                break;
            }
            /* End */
            case 3:
            {
                printf("\nTerminating program...\n");
                return 0;
            }
            /* Default just in case, shouldn't ever be seen */
            default:
            {
                printf("Oops! This wasn't supposed to happen!");
            }
        }
    }
    
    return 0;
}

/* Function definitions */
void c_to_f(double c, double *f)
{
    *f = c * (9.0/5) + 32;
}

void f_to_c(double f, double *c)
{
    *c = (f - 32) * (5.0/9);
}