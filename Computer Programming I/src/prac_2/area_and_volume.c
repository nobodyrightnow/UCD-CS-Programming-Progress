/* Write a C program to read a value r and display the area of a circle with radius r and the volume of a sphere with radius r
The formula for the volume of a sphere is 4/3πr^3
Use the constant M_PI defined in the math library for π

The area and volume should be displayed correct to two decimal places.

Here is a sample run of the program: 

Enter a radius:
1
The area is: 3.14
The volume is: 4.19 */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void sphere_comp(double radius, double *area, double *volume);

int main(void)
{
    double radius, area, volume;

    do
    {
        printf("Enter a radius:\n");

        if (scanf("%lf", &radius) != 1)
        {
            while (getchar() != '\n');
            radius = 0;
        }

    } while (radius <= 0);

    sphere_comp(radius, &area, &volume);

    printf("The area is: %.2lf\n", area);
    printf("The volume is: %.2lf\n", volume);
    
    return 0;
}

void sphere_comp(double radius, double *area, double *volume)
{
    *area = M_PI * pow(radius, 2);
    *volume = (4.0 / 3) * M_PI * pow(radius, 3);
}