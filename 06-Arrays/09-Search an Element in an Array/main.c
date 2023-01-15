#include <stdio.h>

/* This program to search an element in an array entered by user. */

int main() {
    int arr_size, element, flag = 0, i;
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

    // Get an element to search in the array
    printf("Enter element to search: ");
    scanf("%d", &element);

    // Search for the element in the array
    for (i = 0; i < arr_size; i++)
    {
        if(arr[i] == element)
        {
            // If the element found flag will be 1
            flag = 1;
            break;
        }
    }

    // Print the result
    (flag) ? printf("%d is found in the position %d\n", element, i+1) : printf("%d is not found in the array\n", element);
    return 0;
}