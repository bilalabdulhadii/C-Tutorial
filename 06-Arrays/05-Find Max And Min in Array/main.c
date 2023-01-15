#include <stdio.h>

/* This program is to find the maximum and minimum element in an array entered by user. */

int main() {
    int arr_size, max, min;
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

    // Set an initial value for max and min
    max = arr[0];
    min = arr[0];

    // Find the maximum and the minimum values
    for(int i=0; i < arr_size; i++)
    {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }

    // Print max and min
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}
