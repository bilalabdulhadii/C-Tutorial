#include <stdio.h>

/* This program is to count the even and the odd elements in an array entered by user. */

int main() {
    int arr_size, even = 0, odd = 0;
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

    // Count the even and the odd elements
    for(int i=0; i < arr_size; i++)
    {
        (arr[i] >= 0) ? even++ : odd++;
    }

    // Print the even and the odd elements count
    printf("The count of the even elements in the array is: %d\n", even);
    printf("The count of the odd elements in the array is: %d\n", odd);
    return 0;
}
