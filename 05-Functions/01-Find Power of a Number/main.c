#include <stdio.h>

/*This program is to find the power of an integer number - entered by user - using function. */

// Declare the function
int power(int base, int exponent);

int main()
{
    int base, exponent;
    // Get the base from user
    printf("Enter the base: ");
    scanf("%d", &base);

    // Get the exponent from user to find the power
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Git the result from power function and print it
    printf("The power of %d is: %d", base, power(base, exponent));
    return 0;
}

// Function to find the power of a number
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    // Return the result to the main function
    return result;
}