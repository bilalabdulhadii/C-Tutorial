#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Enter two numbers: ");
    // Reads two integer numbers
    scanf("%d %d", &num1, &num2);

    // calculating and store the results
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;

    // Displays the results
    printf("%d + %d : %d\n", num1, num2, sum);
    printf("%d - %d : %d\n", num1, num2, sub);
    printf("%d * %d : %d\n", num1, num2, mul);
    printf("%d / %d : %d\n", num1, num2, div);
    printf("%d %% %d : %d", num1, num2, mod);

    return 0;
}
