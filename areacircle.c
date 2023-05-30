// Write a C program to find area of circle

#include <stdio.h>

#define PI 3.14159

void main() 
{
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
}

Output:

Enter the radius of the circle: 2
The area of the circle with radius 2.00 is 12.57
