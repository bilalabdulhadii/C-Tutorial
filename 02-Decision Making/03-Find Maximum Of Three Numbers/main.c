#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    // Get three numbers from the user
    printf("Enter the 1. number: ");
    scanf("%d", &num1);
    printf("Enter the 2. number: ");
    scanf("%d", &num2);
    printf("Enter the 3. number: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3) // if num1 > num2 and num1 > num3 so max is num1
    {
        max = num1;
    }
    else if(num2 > num1 && num2 > num3) // if num2 > num1 and num2 > num3 so max is num2
    {
        max = num2;
    }
    else // The last case max is num3
    {
        max = num3;
    }
    printf("The maximum number is: %d", max);
    return 0;
}