#include <stdio.h>
#include <string.h>

/* This program converts a number from the hexadecimal number system to the octal number system. */
int main() {
    int decimal = 0, octal = 0, base = 1;
    char hexadecimal[100];

    // Get a hexadecimal number from user
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);
    printf("%s in hexadecimal = ", hexadecimal);

    /*To convert a hexadecimal number to octal,
     * first we have to convert the hexadecimal number to decimal then to octal.*/

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

    // 2. Convert decimal to octal
    while(decimal)
    {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    // Printing the result
    printf("%d in octal\n", octal);
    return 0;
}
