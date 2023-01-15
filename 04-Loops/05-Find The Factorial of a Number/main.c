#include <stdio.h>

/* This code is to find the factorial of an entered number from the user. */
int main() {
    int num, factorial = 1;
    // Get a number of the user
    printf("Enter a number: ");
    scanf("%d" ,&num);

    if(num < 0)
    {
        // The factorial of negative numbers is not exist
        printf("There is no factorial of the negative numbers.\n");
    }
    else
    {
        for(int i=1; i <= num; i++)
        {
            factorial *= i;
        }

        // Print the result on the screen
        printf("The factorial of %d is: %d\n", num, factorial);

    }
    return 0;
}
