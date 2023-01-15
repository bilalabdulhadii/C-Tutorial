#include <stdio.h>

/*This program is to find factorial of an integer number - entered by user - using function. */

// Declare the function
int factorial(int num);

int main()
{
    int num;
    // Get an integer number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Git the result from factorial function and print it
    printf("The factorial of %d is: %d\n", num, factorial(num));
    return 0;
}

// Function to find the power of a number
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num ;i++)
    {
        result *= i;
    }
    return result;
}