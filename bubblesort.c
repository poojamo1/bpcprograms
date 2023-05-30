// Write a C program to create an integer array of 10 elements and sort it

#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    int arr[10] = {5, 2, 9, 1, 7, 3, 8, 6, 4, 10};
    int i;

    printf("Array before sorting: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, 10);

    printf("Array after sorting in ascending order: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

Output:

Array before sorting: 5 2 9 1 7 3 8 6 4 10 
Array after sorting in ascending order: 1 2 3 4 5 6 7 8 9 10
