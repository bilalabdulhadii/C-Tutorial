#include <stdio.h>

/* This program to print the elements of an array entered by user. */

int main() {
    int arr_size;

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

    // Print the array elements
    printf("\nThe array elements:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}
