#include <stdio.h>

/* This program converts a number from the decimal number system to the binary number system. */
int main()
{
    long long binary = 0;
    int decimal, i = 1;

    // Get a decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("%d in decimal = ", decimal);

    // Convert decimal to binary
    while(decimal)
    {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }

    // Printing the result
    printf("%lld in binary\n", binary);
    return 0;
}