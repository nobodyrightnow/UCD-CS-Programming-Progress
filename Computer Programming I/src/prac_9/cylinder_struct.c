/* Define a structure named Cylinder to represent a cylinder with fields radius and height of type double.

Write a function using the prototype below that takes a Cylinder structure as an argument and returns the volume and surface area of the cylinder in the arguments.  

   void compute_volume_surface_area(Cylinder c, double *volume, double *surface_area)

Also include a main function in your program which should read the radius and height of a cylinder from the console, call the function compute_volume_surface_area, and display the volume and surface area. 
 
The formulae for calculating the volume and surface area of a cylinder are:
   
    volume=πr^2h
   surface area=2πr(r+h)
   
   Note: use the constant M_PI defined in the math library for π

Here is a sample run of the program:

Enter the radius and height:
1.0
1.0
The volume is: 3.14
The surface area is: 12.57 */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

typedef struct Cylinder
{
    double radius, height;
} Cylinder;

void compute_volume_surface_area(Cylinder c, double *volume, double *surface_area);

int main(void)
{
    Cylinder cyl;
    double vol, sa;

    printf("Enter the radius and height:\n");
    scanf("%lf%lf", &cyl.radius, &cyl.height);

    compute_volume_surface_area(cyl, &vol, &sa);

    printf("The volume is: %.2lf\n", vol);
    printf("The surface area is: %.2lf\n", sa);

    return 0;
}

void compute_volume_surface_area(Cylinder c, double *volume, double *surface_area)
{
    *volume = M_PI * pow(c.radius, 2) * c.height;
    *surface_area = 2 * M_PI * c.radius * (c.radius + c.height);
}