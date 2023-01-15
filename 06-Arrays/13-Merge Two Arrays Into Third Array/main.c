#include <stdio.h>

/* This program to merge two arrays entered by user into third array. */

int main()
{
    int first_size, second_size, third_size;
    // Get the first array size
    printf("Enter the first array size: ");
    scanf("%d", &first_size);

    // Get the second array size
    printf("Enter the second array size: ");
    scanf("%d", &second_size);

    // Declare the arrays
    third_size = first_size + second_size;
    int arr1[first_size], arr2[second_size], arr3[third_size];

    // Get the first array elements
    printf("\nEnter the first array elements:\n");
    for(int i=0; i < first_size; i++)
    {
        printf("%d. Element: ", i+1);
        scanf("%d", &arr1[i]);
    }

    // Get the second array elements
    printf("\nEnter the second array elements:\n");
    for(int i=0; i < second_size; i++)
    {
        printf("%d. Element: ", i+1);
        scanf("%d", &arr2[i]);
    }

    // Print the first array elements
    printf("\nThe first array:\n");
    for(int i=0; i < first_size; i++) printf("%d ", arr1[i]);

    // Print the second array elements
    printf("\nThe second array:\n");
    for(int i=0; i < second_size; i++) printf("%d ", arr2[i]);

    // Print the third array elements
    printf("\n\nThe third array:\n");
    for(int i=0; i < third_size; i++)
    {
        // Merge the first and the second array to into the third array
        if (i < first_size)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i-first_size];
        }
        printf("%d ", arr3[i]);
    }
    return 0;
}