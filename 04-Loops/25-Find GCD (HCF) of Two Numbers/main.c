#include <stdio.h>

/* This program is to find GCD of two integer numbers entered by user. */
int main()
{
    int num1, num2, min, gcd, i;

    // Get two numbers from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the minimum between num1 and num2
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

    // Print the result
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}