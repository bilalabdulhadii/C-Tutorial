#include <stdio.h>

int main()
{
    double number1, number2, result;
    char operation;
    int flag = 0;
    // get two numbers from user
    printf("Enter the first number  : ");
    scanf("%lf", &number1);
    printf("Enter the second number : ");
    scanf("%lf", &number2);

    // get the operation choice from user
    printf("Enter your operation {+, -, *, /} : ");
    scanf(" %c", &operation);

    switch(operation)
    { // Sum choice
        case '+': // Sum choice
            result = number1 + number2;
            break;
        case '-': // Sub choice
            result = number1 - number2;
            break;
        case '*': // Mul choice
            result = number1 * number2;
            break;
        case '/': // Div choice
            if(number2 == 0) // if the number2 is zero, so we can not divide by it
                flag = 1;
            else // else we can divide by it
                result = number1 / number2;
            break;
        default: // Otherwise the entered value is not on of the operations
            printf("\nWrong Entry.\n");
    }

    if(!flag) // If number2 is not zero
    {
        printf("\n\nThe result of %.2lf %c %.2lf : %.2lf\n", number1, operation, number2, result);
    }
    else
    { // If number2 is zero
        printf("\nThe Second number can not be zero.\n");
    }

}
