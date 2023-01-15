#include <stdio.h>

int main()
{
    char ch;
    // Get input from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {   // Condition to check uppercase
        printf("The entered character '%c' is uppercase alphabet.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {   // Condition to check lowercase
        printf("The entered character '%c' is lowercase alphabet.\n", ch);
    }
    else
    {
        printf("The entered character '%c' is not an alphabet.\n", ch);
    }
    
    return 0;
}
