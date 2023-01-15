#include <stdio.h>

/* This code is to find the factors of an entered integer number. */
int main() {
    int number;
    // Get an integer number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nThe factors of %d : ", number);
    for (int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            // If number is divisible by i, so i is factor for number
            printf("%d ", i);
        }
    }
    return 0;
}
