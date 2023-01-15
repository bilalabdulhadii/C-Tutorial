#include <stdio.h>

/* This program converts a number from the binary number system to the octal number system. */
int main()
{
    long long binary;
    int octal = 0, decimal = 0, i = 1;

    // Get a binary number from user
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("%lld in binary = ", binary);

    /*To convert a binary number to octal,
     * first we have to convert the binary number to decimal then to octal.*/

    // 1. Convert binary to decimal
    while (binary != 0)
    {
        decimal += (binary % 10) * i;
        binary /= 10;
        i *= 2;
    }
    i = 1;

    // 2. Convert decimal to octal
    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    // Printing the result
    printf("%d in octal\n", octal);
    return 0;
}