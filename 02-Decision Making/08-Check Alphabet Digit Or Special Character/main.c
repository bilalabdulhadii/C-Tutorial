#include <stdio.h>

int main()
{
    char ch;

    // Get input from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {   // Condition to check alphabet
        printf("'The entered character %c' is alphabet.\n", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {   // Condition to check digit
        printf("The entered character '%c' is digit.\n", ch);
    }
    else
    {
        printf("The entered character '%c' is special character.\n", ch);
    }
    return 0;
}