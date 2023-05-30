// Write a C program to print tables of 5

#include <stdio.h>

void main() 
{
    int number = 5;
    int i;

    printf("Table of %d:\n", number);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

}
