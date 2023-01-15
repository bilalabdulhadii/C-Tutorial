#include <stdio.h>

/* This program converts a number from the binary number system to the decimal number system. */
int main()
{
    long long binary;
    int decimal = 0, i = 1;
    
    // Get a binary number from user
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("%lld in binary = ", binary);

    // Convert binary to decimal
    while (binary)
    {
        decimal += (binary % 10) * i;
        binary /= 10;
        i *= 2;
    }

    // Printing the result
    printf("%d in decimal\n", decimal);
    return 0;
}
