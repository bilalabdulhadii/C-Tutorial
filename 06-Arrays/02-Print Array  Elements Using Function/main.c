#include <stdio.h>

/* This program to print the elements of an array entered by user, using function. */

// Declare the function
void printArray(int arr[], int size);

int main()
{
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
    printArray(arr, arr_size);
    return 0;
}

// Function to print array elements
void printArray(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}