/* Define a structure named Point to represent a point in the 2D plane with fields x and y of type double.

Write a function using the prototype below that takes two Point structures as arguments and returns a Point structure representing the midpoint of the two points. 
The midpoint of points (x1,y1) and (x2,y2) is the point: ((x1+x2)/2,(y1+y2)/2)

   Point midpoint(Point p1, Point p2)
 
Also, write a second function using the prototype below to compute the distance between two points. 
The distance between points (x1,y1) and (x2,y2) is given by: sqrt((x2−x1)^2+(y2−y1)^2)

   double distance(Point p1, Point p2)

Your program should also include a main function which should read the coordinates of the two points from the console, call the functions midpoint and distance, and display the output as shown below.
 
Here is a sample run of the program:

Enter the x and y coordinates of the first point:
1.0
1.0
Enter the x and y coordinates of the second point:
2.0
2.0
The midpoint is: (1.50, 1.50)
The distance is: 1.4142 */

#include <stdio.h>
#include <math.h>

typedef struct Point
{
    double x, y;
} Point;

Point midpoint(Point p1, Point p2);
double distance(Point p1, Point p2);

int main(void)
{
    Point p1, p2;

    printf("Enter the x and y coordinates of the first point:\n");
    scanf("%lf%lf", &p1.x, &p1.y);

    printf("Enter the x and y coordinates of the second point:\n");
    scanf("%lf%lf", &p2.x, &p2.y);

    Point mp = midpoint(p1, p2);
    double d = distance(p1, p2);

    printf("The midpoint is: (%.2lf, %.2lf)\n", mp.x, mp.y);
    printf("The distance is %.4lf\n", d);

    return 0;
}

Point midpoint(Point p1, Point p2)
{
    Point mp;
    
    mp.x = (p1.x + p2.x) / 2;
    mp.y = (p1.y + p2.y) / 2;

    return mp;
}

double distance(Point p1, Point p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

