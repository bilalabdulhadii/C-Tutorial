#include <stdio.h>

/* This code check if the number entered by user is prime or not. */
int main() {
    int num, temp = 1;
    // Get a number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is 0 or 1
    if(num == 0 || num == 1)
    {
        temp = 0;
    }
    for(int i=2; i < num; i++)
    {
        // if num is divisible by i so the number is not a prime
        if(num % i == 0)
            temp = 0;
            break;
    }

    if(temp)
        // temp is 1, so the  number is a prime
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}
