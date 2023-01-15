#include <stdio.h>

/* This program is to find GCD of two integer numbers - entered by user - using function. */

// Declare the function
int gcd(int num1, int num2);

int main()
{
    int num1, num2;

    // Get two numbers from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Git the result from gcd function and print it
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1,num2));
    return 0;
}

// Function to find the power of a number
int gcd(int num1, int num2)
{
    int min, i, gcd;
    min = (num1 < num2) ? num1 : num2;
    i = min;

    // Find the greatest factor
    while (1)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
        i--;
    }
    return  gcd;
}