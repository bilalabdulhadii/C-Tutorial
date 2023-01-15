#include <stdio.h>

/* This program converts a number from the binary number system to the hexadecimal number system. */
int main()
{
    long long binary;
    int decimal = 0, hexadecimal = 0, temp, i = 1;
    char s;

    // Get a binary number from user
    printf("Enter an binary number: ");
    scanf("%lld", &binary);
    printf("%d in binary = ", binary);

    /*To convert a binary number to hexadecimal,
     * first we have to convert the binary number to decimal then to hexadecimal.*/

    // 1. Convert binary to decimal
    while(binary)
    {
        decimal += (binary % 10) * i;
        binary /= 10;
        i *= 2;
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