#include <stdio.h>

/* This program to copy an array entered by user to another array. */

int main() {
    int arr_size;
    // Get the source array size
    printf("Enter the array size: ");
    scanf("%d", &arr_size);

    // Declare the array
    int arr[arr_size], destination[arr_size];

    // Get the source array elements
    printf("\nEnter the source array elements:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d. Element: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Copy the elements from source array to the destination array
    for(int i=0; i < arr_size; i++) destination[i] = arr[i];

    // Print the source array
    printf("\nThe source array:\n");
    for(int i=0; i < arr_size; i++) printf("%d ", arr[i]);

    // Print the destination array
    printf("\nThe destination array:\n");
    for(int i=0; i < arr_size; i++) printf("%d ", destination[i]);

    return 0;
}