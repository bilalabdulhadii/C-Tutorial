#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Value of num1 is set to temp
    temp = num1;
    // Value of num2 is set to num1
    num1 = num2;
    // Value of temp is set to num2
    num2 = temp;

    // Displays the numbers
    printf("The first number is: %d\n", num1);
    printf("The second number is: %d\n", num2);
    return 0;
}
