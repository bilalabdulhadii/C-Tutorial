#include <stdio.h>

int main() {
    int number1, number2, sum, sub, mul, div;
    int *ptr1, *ptr2;

    ptr1 = &number1;
    ptr2 = &number2;

    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2);

    sum = *ptr1 + *ptr2;
    sub = *ptr1 - *ptr2;
    mul = *ptr1 * *ptr2;
    div = *ptr1 / *ptr2;

    printf("\nSum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Mul = %d\n", mul);
    printf("Div = %d\n", div);
    return 0;
}