/* Write a C program to calculate the Euclidean distance between any two points in 2D space. 
Read the coordinates of the points from the keyboard and display the distance. 

The distance between the points (x1,y1) and (x2,y2) is given by sqrt((x2−x1)^2+(y2−y1)^2)
The distance should be displayed correct to four decimal places.
 
Here is a sample run of the program: 

Enter the x coordinate of the first point:
1
Enter the y coordinate of the first point:
2
Enter the x coordinate of the second point:
3
Enter the y coordinate of the second point:
4
The distance between the points (1.00, 2.00) and (3.00, 4.00) is 2.8284 */

#include <stdio.h>
#include <math.h>

double distance(double x1, double x2, double y1, double y2);

int main(void)
{
    double x1, x2, y1, y2, dist;
    do
    {
        printf("Enter the x coordinate of the first point:\n");
        if (scanf("%lf", &x1) != 1)
        {
            while (getchar() != '\n');
            x1 = '\0';
        }
    } while (x1 == '\0');
    do
    {
        printf("Enter the y coordinate of the first point:\n");
        if (scanf("%lf", &y1) != 1)
        {
            while (getchar() != '\n');
            y1 = '\0';
        }
    } while (y1 == '\0');
    do
    {
        printf("Enter the x coordinate of the second point:\n");
        if (scanf("%lf", &x2) != 1)
        {
            while (getchar() != '\n');
            x2 = '\0';
        }
    } while (x2 == '\0');
    do
    {
        printf("Enter the y coordinate of the second point:\n");
        if (scanf("%lf", &y2) != 1)
        {
            while (getchar() != '\n');
            y2 = '\0';
        }
    } while (y2 == '\0');

    dist = distance(x1, x2, y1, y2);

    printf("The distance between the points (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf", x1, y1, x2, y2, dist);

    return 0;
}

double distance(double x1, double x2, double y1, double y2)
{
    return sqrt(pow((x2-x1), 2) + (pow((y2-y1), 2)));
}