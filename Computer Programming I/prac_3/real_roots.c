/* Write a C program to calculate the real roots of a quadratic equation.

A quadratic equation takes the form ax2 + bx + c = 0, where a, b, and c are the coefficients of the equation. Its roots can be computed using the formulae:

r1= (-b+sqrt(b2−4ac))/2a

r2= (−b−sqrt(b2−4ac))/2a

The program should read the coefficients a, b, and c check if the quadratic equation has two real roots, one real root or no real roots:

Note: if a is 0 and b is not 0, the equation has one real root which is equal to −c/b ; if both a and b are 0, the equation has no real roots.
To check if the discriminant (i.e. b2 - 4ac) is equal to 0, refer to Lecture 5 (Equality Operators – Floating-point numbers, slides 16 and 17). 
The roots (if any) should be displayed correct to five decimal places (in your printf statements, use the following format specifier: %.5lf).
 
Here is a sample run of the program: 

Please enter the value for coefficient a:
10
Please enter the value for coefficient b:
3
Please enter the value for coefficient c:
-3
The number of real roots is 2
The first root is 0.41789
The second root is -0.71789 */

#include <stdio.h> 
#include <math.h> 
#define EPS 1e-10

int main(void)
{
	/* Declare variables */
	double a, b, c;         /* coefficients of the equation */
	double discriminant;    /* the discriminant: b^2 - 4ac */ 
	double r1, r2;          /* the values of the real roots */
	int num_real_roots;     /* the number of real roots */

	/* Get input from the user for coefficients a, b, and c */
	printf("Please enter the value for coefficient a:\n"); 
	scanf("%lf", &a);
	printf("Please enter the value for coefficient b:\n"); 
	scanf("%lf", &b);
	printf("Please enter the value for coefficient c:\n"); 
	scanf("%lf", &c);

	/* Find the roots */ 
	if (a == 0) /* a is 0 */
	{ 
		if (b == 0) /* b is 0 */
		{
			/** Write your code here **/
			num_real_roots = 0;
		}
		else /* b is nonzero */
		{
		    /** Write your code here **/
            num_real_roots = 1;
			r1 = -c / b;
		}
	}
	else /* a is nonzero */
	{
		discriminant = b * b - 4 * a * c; /* compute the discriminant */

		if (fabs(discriminant) < EPS) /* discriminant is 0 */ 
		{
		    /** Write your code here **/
		    num_real_roots = 1;
		    r1 = -b / (2*a);
		}
		else if (discriminant > 0) /* discriminant > 0 */
		{
		    /** Write your code here **/
            num_real_roots = 2;
            r1 = (-b + sqrt(discriminant)) / (2 * a);
            r2 = (-b - sqrt(discriminant)) / (2 * a);
		}
		else /* discriminant < 0 */
		{	
            /** Write your code here **/
            num_real_roots = 0;
		}
	} 

	/* Display output */
	printf("The number of real roots is %d\n", num_real_roots);

	if (num_real_roots > 0)
	{
		printf("The first root is %.5lf\n", r1);
	}

	if (num_real_roots == 2)
	{
		printf("The second root is %.5lf\n", r2);
	}

	return 0; 
}
