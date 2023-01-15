#include <stdio.h>

int main()
{
    char ch;
    // Get input from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    // (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The entered character is an alphabet.\n");
    }
    else
    {
        printf("The entered character is not an alphabet.\n");
    }
    return 0;
}
