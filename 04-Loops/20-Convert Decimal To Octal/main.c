#include <stdio.h>

/* This program converts a number from the decimal number system to the octal number system. */
int main()
{
    int octal = 0, decimal, i = 1;

    // Get a decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("%d in decimal = ", decimal);

    // Convert decimal to octal
    while(decimal)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    // Printing the result
    printf("%d in octal\n", octal);
    return 0;
}
