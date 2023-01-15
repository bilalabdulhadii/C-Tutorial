#include <stdio.h>

/* This program converts a number from the octal number system to the hexadecimal number system. */
int main()
{
    int octal, decimal = 0, hexadecimal = 0, temp, i = 1;
    char s;

    // Get an octal number from user
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("%d in octal = ", octal);

    /*To convert an octal number to hexadecimal,
     * first we have to convert the octal number to decimal then to hexadecimal.*/

    // 1. Convert octal to decimal
    while(octal)
    {
        decimal += (octal % 10) * i;
        octal /= 10;
        i *= 8;
    }

    // 2. Convert decimal to hexadecimal
    while(decimal)
    {
        temp = decimal % 16;
        if(temp < 10)
        {
            temp += 48;
        }
        else
        {
            temp += 55;
        }
        hexadecimal = hexadecimal * 100 + temp;
        decimal /= 16;
    }

    // Printing the result
    while(hexadecimal)
    {
        s = hexadecimal % 100;
        printf("%c", s);
        hexadecimal /= 100;
    }
    printf(" in hexadecimal\n");
    return 0;
}