#include <stdio.h>

/* This program to sum all elements of an array entered by user. */

int main() {
    int arr_size, sum = 0;
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
        sum += arr[i];
    }

    // Print the sum of the array elements
    printf("\nThe sum of the array elements is: %d\n", sum);
    return 0;
}
