#include <stdio.h>

/* This program to rotate an array entered by user to left by N position. */

int main() {
    int arr_size, rotate_number, first_element;
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
    printf("Enter the number of times to rotate left: ");
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
        // Store the first element
        first_element= arr[0];
        // Shift each element to left
        for (int j = 0; j < arr_size-1; j++) {
            arr[j] = arr[j+1];
        }
        // Put the first element at the end of the array
        arr[arr_size-1] = first_element;
    }

    // Print the array after rotation
    printf("\nThe array after rotation:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}