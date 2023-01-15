#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Enter two numbers: ");
    // Reads two integer numbers
    scanf("%d %d", &num1, &num2);

    // calculating and store the result
    int sum = num1 + num2;

    // Displays the result
    printf("The sum of (%d + %d) is: %d", num1, num2, sum);
    return 0;
}
