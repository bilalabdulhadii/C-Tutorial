#include <stdio.h>

/* This program to count the frequency of each element in an array entered by user. */

int main() {
    int arr_size;
    // Get the array size
    printf("Enter the array size: ");
    scanf("%d", &arr_size);

    // Declare two arrays, one for the elements, and another to hold the frequency of each element
    int arr[arr_size], count[arr_size];

    // Get the array elements
    printf("Enter the array elements:\n");
    for(int i=0; i < arr_size; i++)
    {
        printf("%d. Element: ", i+1);
        scanf("%d", &arr[i]);
        count[i] = 1;
    }

    for(int i=0; i < arr_size; i++)
    {
        // Find and store the frequency of each element
        for (int j = i+1; j < arr_size; j++)
        {
            if(arr[i] == arr[j]) count[i]++;
        }

        // Make each repeated element count as zero in count array, so we can print any element just for one time
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count[i] = 0;
                break;
            }
        }
    }

    // Print the elements of count array if the element is not zero
    printf("\n");
    for (int i = 0; i < arr_size; i++)
    {
        if(count[i] != 0)
        {
            printf("%d repeated %d times\n", arr[i], count[i]);
        }
    }
    return 0;
}
