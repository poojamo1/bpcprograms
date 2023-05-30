// Write a C program to print the message hello if the number is divisible by 2 and print the message world if the number is divisible by 3, print the message hello world if the number is divisible by both 2 and 3 

#include <stdio.h>

void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0) {
        printf("Hello World\n");
    }
    else if (number % 2 == 0) {
        printf("Hello\n");
    }
    else if (number % 3 == 0) {
        printf("World\n");
    }
    else {
        printf("Number is not divisible by 2 or 3\n");
    }

}
