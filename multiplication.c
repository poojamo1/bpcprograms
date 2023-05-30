// Write a C program to perform multiplication of 2 float values

#include <stdio.h>

void main() 
{
    float num1, num2, product;

    printf("Enter the first float number: ");
    scanf("%f", &num1);

    printf("Enter the second float number: ");
    scanf("%f", &num2);

    product = num1 * num2;

    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);
}
