#include <stdio.h>
#include <string.h>

/* This program converts a number from the hexadecimal number system to the binary number system. */
int main() {
    long long binary = 0;
    int decimal = 0, base = 1;
    char hexadecimal[100];

    // Get a hexadecimal number from user
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);
    printf("%s in hexadecimal = ", hexadecimal);

    /*To convert a hexadecimal number to binary,
     * first we have to convert the hexadecimal number to decimal then to binary.*/

    // 1. Convert Hexadecimal to decimal
    int len = strlen(hexadecimal);
    for (int i = len - 1; i >= 0; i--)
    {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
        {
            decimal += (hexadecimal[i] - 48) * base;
        }
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
        {
            decimal += (hexadecimal[i] - 55) * base;
        }
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
        {
            decimal += (hexadecimal[i] - 87) * base;
        }
        base *= 16;
    }
    base = 1;

    // 2. Convert decimal to binary
    while(decimal)
    {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }

    // Printing the result
    printf("%lld in binary\n", binary);
    return 0;
}
