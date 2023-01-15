#include <stdio.h>

int main() {
    int num;
    // Get a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("The number is positive.");
    }
    else if(num < 0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }
    return 0;
}


