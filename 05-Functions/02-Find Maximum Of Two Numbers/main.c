#include <stdio.h>

/*This program is to find maximum of two integer numbers - entered by user - using function. */

// Declare the function
int maximum(int num1, int mum2);

int main()
{
    int num1, num2;
    // Get two numbers from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Git the result from maximum function and print it
    printf("The maximum of %d & %d is: %d", num1, num2, maximum(num1, num2));
    return 0;
}

// Function to find the power of a number
int maximum(int num1, int num2)
{
    if(num1 > num2)
        // Return the result to the main function
        return num1;
    else
        // Return the result to the main function
        return num2;
}