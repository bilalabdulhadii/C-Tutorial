#include <stdio.h>

int main()
{
    char ch;

    // Get input from user
    printf("Enter any character: ");
    scanf("%c", &ch);
    //  Condition to check if the input is a vowel
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("The entered character '%c' is Vowel.\n", ch);
    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {   //  Condition to check if the input is a consonant
        printf("The entered character '%c' is Consonant.\n", ch);
    }
    else
    {
        printf("The entered character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}
