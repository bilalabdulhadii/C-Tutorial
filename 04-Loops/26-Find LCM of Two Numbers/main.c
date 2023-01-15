#include <stdio.h>

/* This program is to find LCM of two integer numbers entered by user. */
int main()
{
    int num1, num2, max, lcm, i;

    // Get two numbers from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the minimum between num1 and num2
    max = (num1 > num2) ? num1 : num2;
    i = max;

    // Find the greatest factor
    while (1)
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i += max;
    }

    // Print the result
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}