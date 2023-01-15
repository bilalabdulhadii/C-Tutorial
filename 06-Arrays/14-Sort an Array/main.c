#include <stdio.h>

/* This program to sort an array - entered by user - in ascending order. */

int main()
{
    int arr_size, temp;
    // Get the array size
    printf("Enter the array size: ");
    scanf("%d", &arr_size);

    // Declare the array
    int arr[arr_size];

    // Get the array elements
    printf("\nEnter the array elements:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d. Element: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Sort the array
    for(int i=0; i < arr_size; i++)
    {
        for(int j=i+1; j < arr_size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nThe array elements after sorting: ");
    for(int i=0; i < arr_size; i++) printf("%d  ", arr[i]);
    return 0;
}