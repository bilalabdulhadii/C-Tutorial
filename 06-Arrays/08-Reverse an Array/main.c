#include <stdio.h>

/* This program to find the reverse of an array entered by user. */

int main() {
    int arr_size, temp;
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

    // Find the reverse of the array
    for (int i = 0; i < arr_size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[arr_size - i - 1];
        arr[arr_size - i - 1] = temp;
    }

    // Print the reversed array
    printf("\nThe elements of the reversed array:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}