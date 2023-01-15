#include <stdio.h>

/* This Code is to check if the number entered by user is an armstrong number or not. */
int main() {
    int number, temp, result = 0, rest;
    // Get a number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0)
    {
        // To get each digit separately and store on rest variable
        rest = temp % 10;
        result += rest * rest * rest;
        // To remove the digit that added to result variable
        temp /= 10;
    }

    if(result == number)
    {
        printf("%d is an armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an armstrong number.\n", number);
    }
    return 0;
}
