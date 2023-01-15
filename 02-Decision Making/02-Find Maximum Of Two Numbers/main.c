#include <stdio.h>

int main() {
    int num1, num2;
    // Get two numbers from
    // the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    if(num1 > num2) // num1 is maximum
    {
        printf("The maximum is: %d", num1);
    }
    else if(num1 < num2) // num2 is maximum
    {
        printf("The maximum is: %d", num2);
    }
    else // num1 is equal to num2
    {
        printf("The two numbers are equal");
    }

    return 0;
}