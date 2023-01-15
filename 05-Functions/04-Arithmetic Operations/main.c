#include <stdio.h>

/*This program is to create a simple calculator using functions
 * This program gets an arithmetic operator +, -, *, / and two operands from the user. */

// Declare Addition function
double add(double num1, double num2);

// Declare Subtraction function
double sub(double num1, double num2);

// Declare Multiplication function
double mul(double num1, double num2);

// Declare Division function
double div(double num1, double num2);

int main()
{
    double result, num1, num2;
    int flag = 0;
    char operator;

    // Get two integer numbers from user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // get an arithmetic operator from user
    printf("Enter your operation {+, -, *, /} : ");
    scanf(" %c", &operator);

    switch(operator)
    {
        // Sum operator
        case '+':
            result = add(num1, num2);
            break;
        // Sub operator
        case '-':
            result = sub(num1, num2);
            break;
        // Mul operator
        case '*':
            result = mul(num1, num2);
            break;
        // Div operator
        case '/':
            if(num2 == 0)
                // if the number2 is zero, so we can not divide by it
                flag = 1;
            else
                // else we can divide by it
                result = div(num1, num2);
            break;
        default:
            // Otherwise the entered value is not on of the operations
            printf("\nWrong Entry.\n");
    }
    if(!flag) // If number2 is not zero
    {
        printf("\n\nThe result of %.2lf %c %.2lf : %.2lf\n", num1, operator, num2, result);
    }
    else
    { // If number2 is zero
        printf("\nThe Second number can not be zero.\n");
    }
    return 0;
}

// Function to find the Addition
double add(double num1, double num2)
{
    return num1 + num2;
}

// Function to find the Subtraction
double sub(double num1, double num2)
{
    return num1 - num2;
}

// Function to find the Multiplication
double mul(double num1, double num2)
{
    return num1 * num2;
}

// Function to find the Division
double div(double num1, double num2)
{
    return num1 / num2;
}