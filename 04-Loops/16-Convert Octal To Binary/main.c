#include <stdio.h>

/* This program converts a number from the octal number system to the binary number system. */
int main()
{
    long long binary = 0;
    int octal, decimal = 0, i = 1;

    // Get an octal number from user
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("%d in octal = ", octal);

    /*To convert an octal number to binary,
     * first we have to convert the octal number to decimal then to binary.*/

    // 1. Convert octal to decimal
    while(octal)
    {
        decimal += (octal % 10) * i;
        octal /= 10;
        i *= 8;
    }
    i = 1;

    // 2. Convert decimal to binary
    while(decimal != 0)
    {
        binary += ((decimal % 2) * i);
        decimal = decimal / 2;
        i *= 10;
    }

    // Printing the result
    printf("%lld in binary\n", binary);
    return 0;
}