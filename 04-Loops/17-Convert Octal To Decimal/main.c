#include <stdio.h>

/* This program converts a number from the octal number system to the decimal number system. */
int main()
{
    int octal, decimal = 0, i = 1;

    // Get an octal number from user
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("%d in octal = ", octal);

    // Convert octal to decimal
    while(octal)
    {
        decimal += (octal % 10) * i;
        octal /= 10;
        i *= 8;
    }

    // Printing the result
    printf("%d in decimal\n", decimal);
    return 0;
}