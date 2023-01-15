#include <stdio.h>

/* This program is check if the number entered by user is palindrome number or not. */
int main() {
    int number, temp, reversed = 0, rest;
    // Get an integer number from user
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;

    while (temp > 0)
    {
        // Find the reverse of the entered number and store on reversed variable
        rest = temp % 10;
        reversed = reversed * 10 + rest;
        temp /= 10;
    }

    if(reversed == number)
    {
        // reversed number is equal to the entered number
        printf("%d is a palindrome number.\n", number);
    }
    else
    {
        printf("%d is not a palindrome number.\n", number);
    }
    return 0;
}
