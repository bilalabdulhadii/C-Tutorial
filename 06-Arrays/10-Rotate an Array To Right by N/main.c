#include <stdio.h>

/* This program to rotate an array entered by user to right by N position. */

int main() {
    int arr_size, rotate_number, last_element;
    // Get the array size
    printf("Enter the array size: ");
    scanf("%d", &arr_size);

    // Declare the array
    int arr[arr_size];

    // Get the array elements
    printf("Enter the array elements:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d. Element: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Get the number of times to rotate right
    printf("Enter the number of times to rotate right: ");
    scanf("%d", &rotate_number);

    // Print the array before rotation
    printf("\nThe array before rotation:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Rotate the array
    for (int i = 0; i < rotate_number; i++)
    {
        // Store the last element
        last_element = arr[arr_size-1];
        // Shift each element to right
        for (int j = arr_size-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        // Put the last element at the beginning of the array
        arr[0] = last_element;
    }

    // Print the array after rotation
    printf("\nThe array after rotation:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}