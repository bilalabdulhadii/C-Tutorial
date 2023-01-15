#include <stdio.h>

/* This program converts a number from the decimal number system to the hexadecimal number system. */
int main()
{
    int decimal, hexadecimal = 0, temp;
    char s;

    // Get a decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("%d in decimal = ", decimal);

    // Convert decimal to hexadecimal
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