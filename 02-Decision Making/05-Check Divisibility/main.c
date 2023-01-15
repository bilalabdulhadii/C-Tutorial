#include <stdio.h>

// Check if the number is divisible by 4 and 25.
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%4 == 0 && number%25 == 0)
    { // The number is divisible by 4 and 25
        printf("\nThe number is divisible by 4 and 25.\n");
    }
    else if(number%4 == 0 && number%25 != 0)
    { // The number is only divisible by 4
        printf("The number is just divisible by 4.\n");
    }
    else if(number%4 != 0 && number%25 == 0)
    { // The number is only divisible by 25
        printf("The number is just divisible by 25.\n");
    }
    else
    { // The number is not divisible by 4 and 25
        printf("The number is not divisible by 4 and 25.\n");
    }
    return 0;
}
